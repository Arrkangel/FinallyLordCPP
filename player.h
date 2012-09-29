#pragma once
#include "point2d.h"

class Player
{
	private:
		Point2D pos;
	public:
		Player();
		Player(Point2D _pos);
		void setPos(Point2D _pos);
		Point2D getPos();
		void moveDir(Point2D _dir);
};