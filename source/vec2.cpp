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