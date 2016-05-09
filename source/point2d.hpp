# ifndef BUW_POINT2D_HPP
# define BUW_POINT2D_HPP


class Point2d
{

public:
	Point2d() : x_{0}, y_{0}{}
	Point2d(double x, double y);
	~Point2d();
	double x()const;
	double y()const;
	void translate(double a, double b);
	void rotate(double r);
private:
	double x_;
	double y_;
};
#endif
