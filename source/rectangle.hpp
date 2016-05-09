# ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

#include "color.hpp"
#include <window.hpp>

class Rectangle
{
public:
	Rectangle(float x,float y, double a, double b);
	Rectangle(float x, float y, double a, double b, Color const& c);
	~Rectangle();

	void draw (Window const&);
	double x()const;
	double y()const;
	double a()const;
	double b()const;
	double Circumference()const;
private:
	Color color_;
	float x_;
	float y_;

	double a_;
	double b_;
};

#endif