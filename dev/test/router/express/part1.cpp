#include <catch/catch.hpp>

#include <iterator>

#include <restinio/router/express.hpp>

using namespace restinio;
using namespace restinio::router;
using restinio::router::impl::route_matcher_t;

TEST_CASE( "Original tests (part1)" , "[path2regex][original][generated][part1]" )
{

#include "original_tests_part1.inl"

}
