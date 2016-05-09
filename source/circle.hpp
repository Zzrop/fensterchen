# ifndef CIRCLE_HPP
# define CIRCLE_HPP
#define _USE_MATH_DEFINES
#include <cmath>

#include "color.hpp"
#include <window.hpp>

class Circle
{
public:
	Circle(float x,float y, double r);
	Circle(float x,float y, double r,Color const& c);

	Circle(double r);
	~Circle();
	
	void draw (Window const&);
	double x()const;
	double y()const;
	double r()const;
	double Circumference()const;
private:
	float x_;
	float y_;
	Color color_;
	double r_;

};

#endif