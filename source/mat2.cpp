#include "mat2.hpp"

Mat2::Mat2(float a1, float b1, float c1, float d1) :
	a{a1}, b{b1},c{c1},d{d1}{}
Mat2::Mat2() :
	a{1.0},b{0.0},c{0.0},d{1.0}{}

float Mat2::det()const{
	return (a*d)-(b*c);
} 

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

Vec2 operator * ( Mat2 const& m, Vec2 const& v ){
	Vec2 v1(m.a*v.x+m.b*v.y,m.c*v.x+m.d*v.y);
	return v1;
}

Vec2 operator *( Vec2 const& v, Mat2 const& m ){
	Vec2 v1(m.a*v.x+m.b*v.y,m.c*v.x+m.d*v.y);
	return v1;	
}

/*Mat2 inverse( Mat2 const& m ){
	Mat2 m1 = {(1.0/m1.a)-((m1.b/m1.a)*-m.c*1.0/m.a)/(m.d-m.c*m.b/m.a),-(m.b/m.a)*1.0/(m.d-m.c*m.b/m.a),-m.c*1.0/m.a/(m.d-m.c*m.b/m.a), 1.0/(m.d-m.c*m.b/m.a)};
	return m1;
}*/
Mat2 transpose ( Mat2 const & m ){
	Mat2 m1{m.a,m.c,m.b,m.d};
	return m1;
}
Mat2 make_rotation_mat2(float phi);