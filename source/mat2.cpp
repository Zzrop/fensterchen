#include "mat2.hpp"

Mat2::Mat2(float a1, float b1, float c1, float d1) :
	a{a1}, b{b1},c{c1},d{d1}{}
Mat2::Mat2() :
	a{1.0},b{0.0},c{0.0},d{1.0}{}

Mat2& Mat2::operator*=(Mat2 const& m){
	Mat2 m1(a*m.a+b*m.c,a*m.b+b*m.d,c*m.a+d*m.c,c*m.b+d*m.d);
	a=m1.a;
	b=m1.b;
	c=m1.c;
	d=m1.d;
}

Mat2 operator * (Mat2 const& m1, Mat2 const& m2){
	Mat2 m3(m1.a*m2.a+m1.b*m2.c,m1.a*m2.b+m1.b*m2.d,m1.c*m2.a+m1.d*m2.c,m1.c*m2.b+m1.d*m2.d);
	return m3;
}