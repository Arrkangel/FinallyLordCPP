#include "player.h"


Player::Player()
{

}
Player::Player(Point2D _pos)
{
	pos=_pos;
}
void Player::setPos(Point2D _pos)
{
	pos=_pos;
}
Point2D Player::getPos()
{
	return pos;
}
void Player::moveDir(Point2D* _dir)
{
	pos=pos.add(_dir);
}