# ifndef COLOR_HPP
# define COLOR_HPP

struct Color
{
	Color(float x):
		r{x},g{x},b{x}{}
	Color(float a,float b1, float c):
		r{a},g{b1},b{c}{}
	float r;
	float g;
	float b;

};
#endif
