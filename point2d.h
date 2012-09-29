#pragma once
//Basic 2D point class
class Point2D
{
	private:
		double x;
		double y;
	public:
		Point2D();
		Point2D(double _x,double _y);
		void setX(double _x);
		void setY(double _y);
		double getX();
		double getY();
		Point2D add(Point2D* b);
};