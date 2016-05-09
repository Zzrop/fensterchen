#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"
#include <math.h>
#include "color.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

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
TEST_CASE("vec2 * mat2","vec*mat"){
	Mat2 m1(1.0,1.0,1.0,1.0);
	Mat2 m2(1.0,2.0,3.0,4.0);
	Vec2 v1{1.0,2.0};
	Vec2 v2=v1*m1;
	Vec2 v3=v1*m2;
	REQUIRE(v2.x == 3.0);
	REQUIRE(v2.y == 3.0);
	REQUIRE(v3.x == 5.0);
	REQUIRE(v3.y == 11.0);

}
/*TEST_CASE("mat2 inv","inv()"){
	Mat2 m1(1.0,1.0,1.0,1.0);
	Mat2 m2(1.0,2.0,3.0,4.0);
	Mat2 m3 = inverse(m2);
	REQUIRE(m3.a == -2.0);
	REQUIRE(m3.b == 1.0);
	REQUIRE(m3.c == 1.5);
	REQUIRE(m3.d == -0.5);

}*/
	TEST_CASE("mat2 trans","transpose"){
	Mat2 m2(1.0,2.0,3.0,4.0);
	Mat2 m1=transpose(m2);
	REQUIRE(m1.a == 1.0);
	REQUIRE(m1.b == 3.0);
	REQUIRE(m1.c == 2.0);
	REQUIRE(m1.d == 4.0);

}
	TEST_CASE("mat2 dreh","rotate"){
	Vec2 v{1.0,0.0};
	Mat2 m1=make_rotation_mat2(0.5*M_PI);
	Vec2 v1=v*m1;
	REQUIRE(v1.x == Approx(0.0));
	REQUIRE(v1.y == 1.0);
	Mat2 m2=transpose(m1);
	Vec2 v2 =v*m2;
	REQUIRE(v2.x == Approx(0.0));
	REQUIRE(v2.y == Approx(-1.0));

}
	TEST_CASE("color","color"){
	Color black{0.0};

	REQUIRE(black.r == 0.0);
	REQUIRE(black.g == 0.0);
	REQUIRE(black.b == 0.0);
	Color red{1.0,0.0,0.0};
	REQUIRE(red.r == 1.0);
	REQUIRE(red.g == 0.0);
	REQUIRE(red.b == 0.0);
}
	TEST_CASE("Circle","circle konstruktoren"){
	Color black{0.0};
	Circle c1{1.0,1.0,1.0,black};
	REQUIRE(c1.x() == 1.0);
	REQUIRE(c1.y() == 1.0);
	REQUIRE(c1.r() == 1.0);
	REQUIRE(c1.Circumference() == 2*M_PI);
	Circle c2{2.0};
	REQUIRE(c2.x() == 0.0);
	REQUIRE(c2.y() == 0.0);
	REQUIRE(c2.r() == 2.0);
	REQUIRE(c2.Circumference() == 4*M_PI);
}
	TEST_CASE("rectangle","rectangle konstruktoren"){
	Color black{0.0};
	Rectangle r1{1.0,1.0,1.0,1.0,black};
	REQUIRE(r1.x() == 1.0);
	REQUIRE(r1.y() == 1.0);
	REQUIRE(r1.a() == 1.0);
	REQUIRE(r1.b() == 1.0);
	REQUIRE(r1.Circumference() == 4.0);
	Rectangle r2;
	REQUIRE(r2.x() == 0.0);
	REQUIRE(r2.y() == 0.0);
	REQUIRE(r2.a() == 1.0);
	REQUIRE(r2.b() == 1.0);
	REQUIRE(r2.Circumference() == 4.0);
	Rectangle r3{-1.0,-1.0,2.0,2.0};
	REQUIRE(r3.x() == -1.0);
	REQUIRE(r3.y() == -1.0);
	REQUIRE(r3.a() == 2.0);
	REQUIRE(r3.b() == 2.0);
	REQUIRE(r3.Circumference() == 8.0);	
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
