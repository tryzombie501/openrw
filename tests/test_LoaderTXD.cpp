#include <boost/test/unit_test.hpp>

#include <test_globals.hpp>
#include <gl/gl_core_3_3.h>
#include <loaders/LoaderTXD.hpp>

#include <cstdint>

BOOST_AUTO_TEST_SUITE(LoaderTXDTests)

BOOST_AUTO_TEST_CASE(texture_load_tests)
{
	rw::LoaderTXD txdLoader;

	auto file = Global::get().d->openFile("landstal.txd");
	BOOST_REQUIRE(file != nullptr);

	auto dictionary = txdLoader.loadFromMemory(file);
	BOOST_REQUIRE(dictionary);

	BOOST_CHECK(dictionary->getTextures().size() > 0);

	for (auto& p : dictionary->getTextures())
	{
		// All Textures should have data waiting to be commited
		BOOST_CHECK(p.second->needsCommit());
	}
}

BOOST_AUTO_TEST_SUITE_END()
