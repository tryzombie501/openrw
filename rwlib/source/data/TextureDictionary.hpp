#ifndef RWLIB_TEXTUREDICTIONARY_HPP
#define RWLIB_TEXTUREDICTIONARY_HPP
#include <data/Texture.hpp>

#include <map>

namespace rw
{
/**
 * @brief The TextureDictionary stores Textures
 */
class TextureDictionary
{
public:
	TextureDictionary();
	~TextureDictionary();

	void addTexture(rw::Texture* texture);

	/**
	 * @brief addTextures copies textures from another texture dictionary
	 * @param dict
	 */
	void addTextures(rw::TextureDictionary* dict);

	rw::Texture* findTexture(const std::string& name) const
	{
		auto it = m_textures.find(name);
		if (m_textures.end() != it) return it->second;
		return nullptr;
	}

	const std::map<std::string, rw::Texture*>& getTextures() const
	{
		return m_textures;
	}
private:
	std::map<std::string, rw::Texture*> m_textures;
};
}

#endif
