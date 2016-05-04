#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("vector","x,y"){

	Vec2 v1{1.0,1.0};
	Vec2 v2;

	REQUIRE(v1.x == 1.0);
	REQUIRE(v1.y == 1.0);
	REQUIRE(v2.x == 0.0);
	REQUIRE(v2.y == 0.0);

}


TEST_CASE("vectoraddition","+="){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3(0.75,-1.5);
	v1 += v2;
	v2 += v3;
	REQUIRE(v1.x == 2.5);
	REQUIRE(v1.y == 2.5);
	REQUIRE(v2.x == 2.25);
	REQUIRE(v2.y == 0.0);

}

TEST_CASE("vectorsubtraktion","-="){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3(0.75,-1.5);
	v1 -= v2;
	v2 -= v3;
	REQUIRE(v1.x == -0.5);
	REQUIRE(v1.y == -0.5);
	REQUIRE(v2.x == 0.75);
	REQUIRE(v2.y == 3.0);

}

TEST_CASE("vector multiplikation","*="){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3;
	v1 *= 1.0;
	v2 *= -2.0;
	v3 *= 123456789.0;
	REQUIRE(v1.x == 1.0);
	REQUIRE(v1.y == 1.0);
	REQUIRE(v2.x == -3.0);
	REQUIRE(v2.y == -3.0);
	REQUIRE(v3.x == 0.0);
	REQUIRE(v3.y == 0.0);

}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
