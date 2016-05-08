#include "vec2.hpp"

Vec2::Vec2(float a, float b) :
	x{a},y{b}{}

Vec2::Vec2() :
	x{0},y{0}{}

Vec2& Vec2::operator += (Vec2 const& v){
	x=x+v.x;
	y=y+v.y;
}

Vec2& Vec2::operator -= (Vec2 const& v){
	x=x-v.x;
	y=y-v.y;
}

Vec2& Vec2::operator *= (float v){
	x=x*v;
	y=y*v;
}
Vec2& Vec2::operator /= (float v){
	if(v == 0){
		std::cout <<"durch null teilt man nicht!" << std::endl;
		
	}
	x=x/v;
	y=y/v;

}

Vec2 operator + (Vec2 const& u, Vec2 const& v){
	Vec2 w;
	w.x=u.x+v.x;
	w.y=u.y+v.y;
	return w;
}

Vec2 operator - (Vec2 const& u, Vec2 const& v){
	Vec2 w;
	w.x=u.x-v.x;
	w.y=u.y-v.y;
	return w;
}

Vec2 operator * (Vec2 const& v, float s){
	Vec2 w;
	w.x=s*v.x;
	w.y=s*v.y;
	return w;
}
Vec2 operator / (Vec2 const& v, float s){
	Vec2 w;
	w.x=v.x/s;
	w.y=v.y/s;
	return w;
}

Vec2 operator * (float s, Vec2 const& v){
	Vec2 w;
	w.x=v.x*s;
	w.y=v.y*s;
	return w;
}


