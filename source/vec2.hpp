#ifndef VEC2_HPP
#define VEC2_HPP
#include <iostream>
#include <string>



class Vec2{


			//Destructor:ja, aber wird vom programm automatisch synthetisiert
	public:
	Vec2(float a,float b);
	Vec2();
	Vec2& operator += (Vec2 const& v);
	Vec2& operator -= (Vec2 const& v);
	Vec2& operator *=(float v);
	Vec2& operator /=(float v);

	float x;
	float y;
};

Vec2 operator + (Vec2 const& u, Vec2 const& v);
Vec2 operator - (Vec2 const& u, Vec2 const& v);
Vec2 operator * (Vec2 const& v, float s);
Vec2 operator / (Vec2 const& v, float s);
Vec2 operator * (float s, Vec2 const& v);

#endif