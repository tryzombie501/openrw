#ifndef RWLIB_LOADERTXD_HPP
#define RWLIB_LOADERTXD_HPP
#include <data/Texture.hpp>

#include <loaders/RWBinaryStream.hpp>
#include <job/WorkContext.hpp>

#include <platform/FileHandle.hpp>
#include <functional>
#include <string>
#include <map>


typedef std::map<std::string, rw::Texture*> TextureDictionary;

class FileIndex;

namespace rw
{
class LoaderTXD
{
public:
	bool loadFromMemory(FileHandle file, TextureDictionary& archive);
private:
	rw::Texture* createTexture(RW::BSTextureNative&, RW::BinaryStreamSection&);
};
}

// TODO: refactor this interface to be more like ModelLoader so they can be rolled into one.
class LoadTextureArchiveJob : public WorkJob
{
private:
	TextureDictionary& archive;
	TextureDictionary loaded;
	FileIndex* fileIndex;
	std::string _file;
	FileHandle data;
public:

	LoadTextureArchiveJob(WorkContext* context, FileIndex* index, TextureDictionary& inTextures, const std::string& file);

	void work();

	void complete();
};

#endif
