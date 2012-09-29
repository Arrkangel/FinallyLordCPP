#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <SFML/Window.hpp>
#include "game.h"
#include "point2d.h"

class InputHandler
{
private:
	void handleKeyPress(sf::Key::Code code);//Handle key press events
	bool isMovement(sf::Key::Code code);//Is the key code a movement one?
	bool movement;//Has the player moved since last frame?
	Point2D move_dir;//If so, the direction
	
public:

	void update();//Clear last frame stuff
	void handleInput(sf::Event event);//Called by main to handle each input event
};
#endif