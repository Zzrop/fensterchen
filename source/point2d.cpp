#define _USE_MATH_DEFINES
#include <cmath>
#include <point2d.hpp>

Point2d::Point2d(double x, double y):
	x_{x}, y_{y}{}

double Point2d::x()const
{
	return x_;
}

double Point2d::y()const
{
	return y_;
}

Point2d::~Point2d(){}

void Point2d::translate(double a, double b)
{
	x_=x_+a;
	y_=y_+b;
}
void Point2d::rotate(double r)
{
	double old_x = x_;
	double old_y = y_;
	x_=old_x*cos(-r)-old_y*sin(-r);
	y_=old_x*sin(-r)+old_y*cos(-r);
}