#include <data/TextureDictionary.hpp>
#include <rw/defines.hpp>

rw::TextureDictionary::TextureDictionary()
{

}

rw::TextureDictionary::~TextureDictionary()
{

}

void rw::TextureDictionary::addTexture(rw::Texture* texture)
{
	RW_CHECK(m_textures.find(texture->getName()) == m_textures.end(),
			 "Texture already exists in dictionary");

	m_textures[texture->getName()] = texture;
}

void rw::TextureDictionary::addTextures(rw::TextureDictionary* dict)
{
	for (auto& p : dict->getTextures())
	{
		addTexture(p.second);
	}
}
