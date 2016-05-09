#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"

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

TEST_CASE("vector division","/="){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3;
	Vec2 v4{2.5,2.5};
	v1 /= 1.0;
	v2 /= -2.0;
	v3 /= 123456789.0;
	//v4 /= 0.0;
	REQUIRE(v1.x == 1.0);
	REQUIRE(v1.y == 1.0);
	REQUIRE(v2.x == -0.75);
	REQUIRE(v2.y == -0.75);
	REQUIRE(v3.x == 0.0);
	REQUIRE(v3.y == 0.0);
	//REQUIRE(v4.y != 2.5);
	//REQUIRE(v4.y != 2.5);
}	

TEST_CASE("vector +","+"){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3 = v1+v2;
	Vec2 v5(-1.0,-1.0);
	REQUIRE(v3.x == 2.5);
	REQUIRE(v3.y == 2.5);
	Vec2 v4 = v1+v5;
	REQUIRE(v4.x == 0.0);
	REQUIRE(v4.y == 0.0);	

}

TEST_CASE("vector -","-"){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3 = v1-v2;
	Vec2 v5(-1.0,-1.0);
	REQUIRE(v3.x == -0.5);
	REQUIRE(v3.y == -0.5);
	Vec2 v4 = v1-v5;
	REQUIRE(v4.x == 2.0);
	REQUIRE(v4.y == 2.0);	

}
TEST_CASE("vector *","*"){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3 = v1*-0.5;
	Vec2 v4 = v2*0.0;
	REQUIRE(v3.x == -0.5);
	REQUIRE(v3.y == -0.5);	
	REQUIRE(v4.x == 0.0);
	REQUIRE(v4.y == 0.0);	
}
TEST_CASE("vector /","/"){

	Vec2 v1{1.0,1.0};
	Vec2 v2(2.0,2.0);
	Vec2 v3 = v1/0.5;
	Vec2 v5(-1.0,-1.0);
	REQUIRE(v3.x == 2.0);
	REQUIRE(v3.y == 2.0);
	Vec2 v4 = v1/2.0;
	REQUIRE(v4.x == 0.5);
	REQUIRE(v4.y == 0.5);	

}
TEST_CASE("s vector *","s*"){

	Vec2 v1{1.0,1.0};
	Vec2 v2(1.5,1.5);
	Vec2 v3 = -0.5*v1;
	Vec2 v4 = 0.0*v2;
	REQUIRE(v3.x == -0.5);
	REQUIRE(v3.y == -0.5);	
	REQUIRE(v4.x == 0.0);
	REQUIRE(v4.y == 0.0);	
}
TEST_CASE("mat2","standart"){
	Mat2 m1;
	Mat2 m2{1.0,2.0,3.0,4.0};
	REQUIRE(m1.a == 1.0);
	REQUIRE(m1.b == 0.0);
	REQUIRE(m1.c == 0.0);
	REQUIRE(m1.d == 1.0);
	REQUIRE(m2.a == 1.0);
	REQUIRE(m2.b == 2.0);
	REQUIRE(m2.c == 3.0);
	REQUIRE(m2.d == 4.0);

}
TEST_CASE("mat2 mult","mat2 *="){
	Mat2 m1(1.0,1.0,1.0,1.0);
	Mat2 m2{1.0,2.0,3.0,4.0};
	Mat2 m3{-0.5,0.0,-0.5,1.0};
	m1*=m2;
	m2*=m3;
	REQUIRE(m1.a == 4.0);
	REQUIRE(m1.b == 6.0);
	REQUIRE(m1.c == 4.0);
	REQUIRE(m1.d == 6.0);
	REQUIRE(m2.a == -1.5);
	REQUIRE(m2.b == 2.0);
	REQUIRE(m2.c == -3.5);
	REQUIRE(m2.d == 4.0);

}
TEST_CASE("mat2 mult 2","mat2 *"){
	Mat2 m1(1.0,1.0,1.0,1.0);
	Mat2 m2{1.0,2.0,3.0,4.0};
	Mat2 m3 =m1*m2;
	REQUIRE(m3.a == 4.0);
	REQUIRE(m3.b == 6.0);
	REQUIRE(m3.c == 4.0);
	REQUIRE(m3.d == 6.0);


}
TEST_CASE("mat2 determinante","det()"){
	Mat2 m1(1.0,1.0,1.0,1.0);
	Mat2 m2{1.0,2.0,3.0,4.0};
	REQUIRE(m1.det() == 0.0);
	REQUIRE(m2.det() == -2.0);


}
TEST_CASE("mat2 * vec2","mat*vec"){
	Mat2 m1(1.0,1.0,1.0,1.0);
	Mat2 m2(1.0,2.0,3.0,4.0);
	Vec2 v1{1.0,2.0};
	Vec2 v2=m1*v1;
	Vec2 v3=m2*v1;
	REQUIRE(v2.x == 3.0);
	REQUIRE(v2.y == 3.0);
	REQUIRE(v3.x == 5.0);
	REQUIRE(v3.y == 11.0);

}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
