#ifndef RWLIB_TEXTURE_HPP
#define RWLIB_TEXTURE_HPP

#include <string>
#include <memory>
#include <queue>

namespace rw
{
enum class FilterMode
{
	None = 0x00,
	Nearest = 0x01,
	Linear = 0x02,
	MipNearest = 0x03,
	MipLinear = 0x04,
	LinearMipNearest = 0x05,
	LinearMipLinear = 0x06
};

enum class WrapMode
{
	None = 0x00,
	Wrap = 0x01,
	Mirror = 0x02,
	Clamp = 0x03
};

enum class TextureFormat
{
	Default = 0x0000,
	ARGB_1555 = 0x0100,
	RGB_565 = 0x0200,
	RGBA_4444 = 0x0300,
	R_8 = 0x0400,
	RGBA_8888 = 0x0500,
	RGB_888 = 0x0600,
	RGB_555 = 0x0A00,
};

/**
 * @brief The Texture class stores run-time information about a texture
 */
class Texture
{
public:
	using NativeHandle = uint32_t;

	enum ExtFlags
	{
		GenerateMipmap = 0x1,
		Palette8 = 0x2,
		Palette4 = 0x4,
		MipmapIncluded = 0x8,

		/* Custom */
		HasAlpha = 0xF
	};

	Texture(const std::string& name, TextureFormat format)
		: m_name(name)
		, m_format(format)
		, m_flags(0)
		, m_wrapU(WrapMode::Clamp)
		, m_wrapV(WrapMode::Clamp)
		, m_filterMode(FilterMode::Nearest)
		, m_width(0)
		, m_height(0)
		, m_nativeHandle(0)
	{ }

	const std::string& getName() const { return m_name; }

	unsigned int getWidth() const { return m_width; }
	unsigned int getHeight() const { return m_height; }

	/**
	 * @brief setLevelData Adds data for a mip chain layer
	 * @param level
	 * @param width
	 * @param height
	 * @param data
	 *
	 * This function does not upload data, commit() will need to be called to
	 * upload data to the underlying texture
	 */
	void setLevelData(unsigned int level, unsigned int width, unsigned int height, void const* data);

	void setWrap(WrapMode wrapU, WrapMode wrapV)
	{
		m_wrapU = wrapU;
		m_wrapV = wrapV;
	}

	void setFilterMode(FilterMode filterMode)
	{
		m_filterMode = filterMode;
	}

	/**
	 * @brief needsCommit check if there is data to be uploaded
	 * @return true if there is data waiting to be uploaded
	 */
	bool needsCommit() const { return !m_commitQueue.empty(); }

	/**
	 * @brief commit Upload waiting texture data
	 * @return the number of layers uploaded
	 *
	 * The intended usage of this is to call the functions that set state, such as setWrap, setLevelData etc.
	 * on a worker thread, then call commit() on all resources when they are ready to be used by the rendering
	 * thread.
	 */
	int commit();

	bool isValid() const
	{
		// Trivial check
		return m_height > 0 && m_width > 0;
	}

	void setFlag(uint8_t flag) { m_flags |= flag; }

	bool hasAlpha() const { return (m_flags&HasAlpha) == HasAlpha; }

	NativeHandle getNativeHandle() const { return m_nativeHandle; }

private:
	std::string m_name;

	TextureFormat m_format;
	uint8_t m_flags;
	WrapMode m_wrapU;
	WrapMode m_wrapV;
	FilterMode m_filterMode;

	uint16_t m_width;
	uint16_t m_height;

	// Internal - store texture data prior to commit
	struct LevelDataPriv
	{
		uint8_t* data;
		unsigned int level;
		unsigned int width;
		unsigned int height;
	};

	std::queue<LevelDataPriv> m_commitQueue;

	NativeHandle m_nativeHandle;
};
}

#endif
