#include "point2d.h"

Point2D::Point2D()
{
	x=0;
	y=0;
}
Point2D::Point2D(double _x,double _y)
{
	x=_x;
	y=_y;
}
void Point2D::setX(double _x)
{
	x=_x;
}
void Point2D::setY(double _y)
{
	y=_y;
}
double Point2D::getX()
{
	return x;
}
double Point2D::getY()
{
	return y;
}
Point2D Point2D::add(Point2D* b)
{
	Point2D c(getX()+b->getX(),getY()+b->getY());
	return c;
}