#ifndef MAT2_HPP
#define MAT2_HPP

class Mat2{

public:
	Mat2(float a1, float b1, float c1, float d1);
	Mat2();

	float a;
	float b;
	float c;
	float d;
	Mat2& operator*=(Mat2 const& m);
};

#endif