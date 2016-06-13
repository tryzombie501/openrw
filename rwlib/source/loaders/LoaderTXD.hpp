#ifndef RWLIB_LOADERTXD_HPP
#define RWLIB_LOADERTXD_HPP
#include <data/TextureDictionary.hpp>

#include <loaders/RWBinaryStream.hpp>
#include <job/WorkContext.hpp>
#include <platform/FileHandle.hpp>

#include <functional>
#include <string>

class FileIndex;

namespace rw
{
class LoaderTXD
{
public:
	rw::TextureDictionary* loadFromMemory(FileHandle file);
private:
	rw::Texture* createTexture(RW::BSTextureNative&, RW::BinaryStreamSection&);
};
}

// TODO: refactor this interface to be more like ModelLoader so they can be rolled into one.
class LoadTextureArchiveJob : public WorkJob
{
public:
	using LoadedCallback = std::function<void(rw::TextureDictionary*)>;

	LoadTextureArchiveJob(WorkContext* context,
						  FileIndex* index,
						  const std::string& file,
						  LoadedCallback done);

	void work();

	void complete();

private:
	rw::TextureDictionary* loaded;
	FileIndex* fileIndex;
	std::string file;
	LoadedCallback completed;
	FileHandle data;
};

#endif
