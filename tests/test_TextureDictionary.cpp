#include <boost/test/unit_test.hpp>

#include <data/Texture.hpp>
#include <gl/gl_core_3_3.h>

#include <cstdint>

BOOST_AUTO_TEST_SUITE(TextureDictionaryTests)

BOOST_AUTO_TEST_CASE(texture_create_test)
{
	{
		uint8_t texdata [] = {
			0xFF, 0xFF, 0x00,
			0x00, 0x00, 0xFF,
			0xFF, 0x00, 0xFF,
			0xFF, 0xFF, 0xFF
		};

		// Test raw RGB creation
		auto testTexture = rw::Texture("texture-1", rw::TextureFormat::RGB_888);
		BOOST_CHECK_EQUAL("texture-1", testTexture.getName());

		testTexture.setLevelData(0, 2, 2, texdata);

		BOOST_REQUIRE(testTexture.isValid());
		BOOST_CHECK_EQUAL(2, testTexture.getWidth());
		BOOST_CHECK_EQUAL(2, testTexture.getHeight());

		BOOST_CHECK(testTexture.needsCommit());

		BOOST_CHECK_EQUAL(1, testTexture.commit());
	}
	{
		uint8_t texdata [] = {
			0xFF, 0xFF, 0x00, 0xFF,
			0x00, 0x00, 0xFF, 0xFF,
			0xFF, 0x00, 0xFF, 0xFF,
			0xFF, 0xFF, 0xFF, 0xFF
		};

		// Test raw RGBA creation
		auto testTexture = rw::Texture("texture-2", rw::TextureFormat::RGBA_8888);

		testTexture.setLevelData(0, 2, 2, texdata);
		BOOST_REQUIRE(testTexture.isValid());
		BOOST_CHECK_EQUAL(2, testTexture.getWidth());

		BOOST_CHECK(testTexture.needsCommit());

		BOOST_CHECK_EQUAL(1, testTexture.commit());
	}
}

BOOST_AUTO_TEST_CASE(texture_commit_test)
{
	{
		uint8_t texdata [] = {
			0xFF, 0xFF, 0x00, 0xFF,
			0x00, 0x00, 0xFF, 0xFF,
			0xFF, 0x00, 0xFF, 0xFF,
			0xFF, 0xFF, 0xFF, 0xFF
		};

		auto testTexture = rw::Texture("texture-2", rw::TextureFormat::RGBA_8888);

		testTexture.setLevelData(0, 2, 2, texdata);

		BOOST_REQUIRE(testTexture.needsCommit());

		glGetError();
		BOOST_CHECK_EQUAL(1, testTexture.commit());
		BOOST_REQUIRE_EQUAL(0, glGetError());
		BOOST_CHECK(glIsTexture(testTexture.getNativeHandle()));
	}
}

BOOST_AUTO_TEST_SUITE_END()
