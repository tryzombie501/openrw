#include "Texture.hpp"

#include <rw/defines.hpp>
#include <gl/gl_core_3_3.h>

#include <cstring>

void rw::Texture::setLevelData(unsigned int level, unsigned int width, unsigned int height, const void* data)
{
	if (level == 0)
	{
		m_width = width;
		m_height = height;
	}

	// Ideally, we should callback to the user to free data instead of copying,
	// since it could be anything (memory mapped file, allocated memory etc)
	// and copying is an unnecassary performance hit
	auto pixelBytes = 0;
	switch (m_format)
	{
	case TextureFormat::R_8:
		pixelBytes = 1;
		break;
	case TextureFormat::ARGB_1555:
	case TextureFormat::RGBA_4444:
	case TextureFormat::RGB_565:
	case TextureFormat::RGB_555: // Slightly oversized
		pixelBytes = 2;
		break;
	case TextureFormat::RGB_888:
	case TextureFormat::RGBA_8888:
		pixelBytes = 4;
		break;
	default:
		RW_ERROR("Unhandled pixel format: " << static_cast<int>(m_format));
		break;
	}

	auto buff = new uint8_t[pixelBytes * width * height];
	std::memcpy(buff, data, pixelBytes * width * height);

	m_commitQueue.push({buff, level, width, height});
}

int rw::Texture::commit()
{
	int uploaded = 0;

	if (m_nativeHandle == 0)
	{
		// Allocate a GL texture if required
		glGenTextures(1, &m_nativeHandle);
	}

	// This currently clobbers renderer state, need to couple to the
	// renderer so caching can be effective.
	glBindTexture(GL_TEXTURE_2D, m_nativeHandle);

	GLint internalFormat = 0;
	GLint format = 0;
	GLint type = 0;
	switch (m_format)
	{
	case TextureFormat::ARGB_1555:
		internalFormat = GL_RGB5_A1;
		format = GL_RGBA;
		type = GL_UNSIGNED_SHORT_1_5_5_5_REV;
		break;
	case TextureFormat::RGB_565:
		internalFormat = GL_RGB565;
		format = GL_RGB;
		type = GL_UNSIGNED_SHORT_5_6_5;
		break;
	case TextureFormat::RGBA_4444:
		internalFormat = GL_RGBA4;
		format = GL_RGBA;
		type = GL_UNSIGNED_SHORT_4_4_4_4;
		break;
	case TextureFormat::R_8:
		internalFormat = GL_R8;
		format = GL_RED;
		type = GL_UNSIGNED_BYTE;
		break;
	case TextureFormat::RGBA_8888:
		internalFormat = GL_RGBA8;
		format = GL_RGBA;
		type = GL_UNSIGNED_BYTE;
		break;
	case TextureFormat::RGB_888:
		internalFormat = GL_RGB8;
		format = GL_BGRA;
		type = GL_UNSIGNED_BYTE;
		break;
	case TextureFormat::RGB_555:
		internalFormat = GL_RGB5;
		format = GL_RGB;
		// Not sure if this is correct
		type = GL_UNSIGNED_SHORT_5_5_5_1;
		break;
	default:
		RW_ERROR("Unhandled pixel format: " << static_cast<int>(m_format));
		break;
	}

	// Update texture parameters
	GLenum wrap = GL_REPEAT;
	switch (m_wrapU)
	{
	case WrapMode::Clamp:
		wrap = GL_CLAMP_TO_EDGE;
		break;
	case WrapMode::Mirror:
		wrap = GL_MIRRORED_REPEAT;
		break;
	default:
	case WrapMode::Wrap:
		wrap = GL_REPEAT;
		break;
	}
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap);

	switch (m_wrapV)
	{
	case WrapMode::Clamp:
		wrap = GL_CLAMP_TO_EDGE;
		break;
	case WrapMode::Mirror:
		wrap = GL_MIRRORED_REPEAT;
		break;
	default:
	case WrapMode::Wrap:
		wrap = GL_REPEAT;
		break;
	}
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap);

	GLenum texFilter = GL_NEAREST;
	switch (m_filterMode)
	{
	default:
	case FilterMode::Nearest:
		texFilter = GL_NEAREST;
		break;
	case FilterMode::Linear:
		texFilter = GL_LINEAR;
		break;
	case FilterMode::MipNearest:
		texFilter = GL_NEAREST_MIPMAP_NEAREST;
		break;
	case FilterMode::MipLinear:
		texFilter = GL_LINEAR_MIPMAP_LINEAR;
		break;
	case FilterMode::LinearMipLinear:
		texFilter = GL_LINEAR_MIPMAP_LINEAR;
		break;
	case FilterMode::LinearMipNearest:
		texFilter = GL_LINEAR_MIPMAP_NEAREST;
		break;
	}
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, texFilter);

	while (!m_commitQueue.empty())
	{
		auto& req = m_commitQueue.front();

		glTexImage2D(GL_TEXTURE_2D,
					 req.level,
					 internalFormat,
					 req.width,
					 req.height,
					 0,
					 format,
					 type,
					 req.data);

		// Free our internal buffer.
		/// @todo notify client we're done with the pointer instead.
		delete[] req.data;

		// Handle automatic mipmap generation
		if (req.level == 0 && (m_flags & GenerateMipmap) ==  GenerateMipmap)
		{
			glGenerateMipmap(GL_TEXTURE_2D);
		}

		uploaded ++;
		m_commitQueue.pop();
	}

	return uploaded;
}
