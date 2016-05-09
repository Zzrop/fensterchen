#define _USE_MATH_DEFINES
#include <cmath>
#include "rectangle.hpp"
#include "color.hpp"
#include <window.hpp>


	Rectangle::Rectangle(float x, float y, double a, double b, Color const& c) :
	x_{x},y_{y}, a_{a}, b_{b}, color_{c}{}
	Rectangle::~Rectangle() {}
	
	void Rectangle::draw(Window const& win)
	{
		/*win.drawLine( mid_.x(), mid_.y(),
                mid_.x()+a_, mid_.y(),
                color_.r, color_.g, color_.b);

		win.drawLine( mid_.x(), mid_.y(),
                mid_.x(), mid_.y()+b_,
                color_.r, color_.g, color_.b);

		win.drawLine( mid_.x()+a_, mid_.y(),
                mid_.x()+a_, mid_.y()+b_,
                color_.r, color_.g, color_.b);

		win.drawLine( mid_.x(), mid_.y()+b_,
                mid_.x()+a_, mid_.y()+b_,
                color_.r, color_.g, color_.b);
	*/
	}
	double Rectangle::x()const
	{
		return x_;
	}
	double Rectangle::y()const
	{
		return y_;
	}
	double Rectangle::a()const
	{
		return a_;
	}
	double Rectangle::b()const
	{
		return b_;
	}
	double Rectangle::Circumference()const
	{
		return 2*a_+2*b_;
	}