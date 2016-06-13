#include <loaders/LoaderTXD.hpp>
#include <rw/defines.hpp>

#include <fstream>
#include <iostream>
#include <algorithm>

const size_t paletteSize = 1024;
void processPalette(uint32_t* fullColor, RW::BinaryStreamSection& rootSection)
{
	uint8_t* dataBase = reinterpret_cast<uint8_t*>(rootSection.raw() + sizeof(RW::BSSectionHeader) + sizeof(RW::BSTextureNative) - 4);

	uint8_t* coldata = (dataBase + paletteSize + sizeof(uint32_t));
	uint32_t raster_size = *reinterpret_cast<uint32_t*>(dataBase + paletteSize);
	uint32_t* palette = reinterpret_cast<uint32_t*>(dataBase);

	for(size_t j = 0; j < raster_size; ++j)
	{
		*(fullColor++) = palette[coldata[j]];
	}

}

rw::TextureDictionary* rw::LoaderTXD::loadFromMemory(FileHandle file)
{
	if (file->data)
	{
		RW::BinaryStreamSection root(file->data);
		auto& textDict = root.readStructure<RW::BSTextureDictionary>();
		RW_UNUSED(textDict);

		/// @todo allocate elsewhere
		auto dict = new rw::TextureDictionary;

		size_t rootI = 0;
		while (root.hasMoreData(rootI)) {
			auto rootSection = root.getNextChildSection(rootI);

			if (rootSection.header.id != RW::SID_TextureNative)
				continue;

			RW::BSTextureNative texNative = rootSection.readStructure<RW::BSTextureNative>();
			auto texture = createTexture(texNative, rootSection);
			RW_CHECK(texture != nullptr, "Failed to load a texture");
			if (texture) {
				dict->addTexture(texture);
			}
		}

		return dict;
	}

	return nullptr;
}

rw::Texture* rw::LoaderTXD::createTexture(RW::BSTextureNative& texNative, RW::BinaryStreamSection& rootSection)
{
	if(texNative.platform != 8) {
		RW_ERROR("Unsupported texture platform: " << std::dec << texNative.platform);
		return nullptr;
	}

	bool isPal8 = (texNative.rasterformat & RW::BSTextureNative::FORMAT_EXT_PAL8) == RW::BSTextureNative::FORMAT_EXT_PAL8;
	bool isFulc = texNative.rasterformat == RW::BSTextureNative::FORMAT_1555 ||
				texNative.rasterformat == RW::BSTextureNative::FORMAT_8888 ||
				texNative.rasterformat == RW::BSTextureNative::FORMAT_888;

	if(! (isPal8 || isFulc)) {
		RW_ERROR("Unsupported raster format: " << std::dec << texNative.rasterformat);
		return nullptr;
	}

	std::string name = std::string(texNative.diffuseName);
	std::string alpha = std::string(texNative.alphaName);
	std::transform(name.begin(), name.end(), name.begin(), ::tolower );
	std::transform(alpha.begin(), alpha.end(), alpha.begin(), ::tolower );

	// This should be allocated by a central rw::System object that can track
	// and manage internal allocations
	auto ourFormat = static_cast<rw::TextureFormat>(texNative.rasterformat&0xFFF);
	if (isPal8) {
		// We don't support palleted textures internally, so this is unpacked into RGBA8888
		ourFormat = rw::TextureFormat::RGBA_8888;
	}
	rw::Texture* texture = new rw::Texture(name, ourFormat);

	if (texNative.alpha) {
		texture->setFlag(rw::Texture::HasAlpha);
	}

	if(isPal8)
	{
		std::vector<uint32_t> fullColor(texNative.width * texNative.height);

		processPalette(fullColor.data(), rootSection);

		texture->setLevelData(0, texNative.width, texNative.height, fullColor.data());
	}
	else if(isFulc)
	{
		auto coldata = rootSection.raw() + sizeof(RW::BSTextureNative);
		coldata += sizeof(uint32_t);

		texture->setLevelData(0, texNative.width, texNative.height, coldata);
	}
	else {
		delete texture;
		return nullptr;
	}

	texture->setFilterMode(static_cast<rw::FilterMode>(texNative.filterflags&0xFF));
	texture->setWrap(
				static_cast<rw::WrapMode>(texNative.wrapU),
				static_cast<rw::WrapMode>(texNative.wrapV));

	return texture;
}

// TODO Move the Job system out of the loading code
#include <platform/FileIndex.hpp>

LoadTextureArchiveJob::LoadTextureArchiveJob(WorkContext *context,
											 FileIndex* index,
											 const std::string &file,
											 LoadedCallback done)
	: WorkJob(context)
	, loaded(nullptr)
	, fileIndex(index)
	, file(file)
	, completed(done)
{

}

void LoadTextureArchiveJob::work()
{
	data = fileIndex->openFile(file);
	if(data) {
		rw::LoaderTXD loader;
		loaded = loader.loadFromMemory(data);
	}
}

void LoadTextureArchiveJob::complete()
{
	if (loaded) {
		for (auto& p : loaded->getTextures()) {
			p.second->commit();
		}
	}
	completed(loaded);
}
