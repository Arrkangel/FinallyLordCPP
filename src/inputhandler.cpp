#include "inputhandler.h"
#include <iostream>

using namespace std;

void InputHandler::isMovement(sf::Key::Code code)
{
	
	switch(code)
	{
		case sf::Key::Numpad8://Up
		movement=true;
		move_dir.setY(-1);
		break;
		case sf::Key::Numpad9://Up right
		movement=true;
		move_dir.setY(-1);
		move_dir.setX(1);
		break;
		case sf::Key::Numpad6://Right
		movement=true;
		move_dir.setX(1);
		break;
		case sf::Key::Numpad3://Down Right
		movement=true;
		move_dir.setX(1);
		move_dir.setY(1);
		break;
		case sf::Key::Numpad2://Down
		movement=true;
		move_dir.setY(1);
		break;
		case sf::Key::Numpad1://Down left
		movement=true;
		move_dir.setX(-1);
		move_dir.setY(1);
		break;
		case sf::Key::Numpad4://Left
		movement=true;
		move_dir.setX(-1);
		break;
		case sf::Key::Numpad7://Up Left
		movement=true;
		move_dir.setX(-1);
		move_dir.setY(-1);
		break;

	}
	if(movement)
	{
		cout << "Movement detected\n";
	}
	
}
void InputHandler::handleKeyPress(sf::Key::Code code)
{
	isMovement(code);

}

void InputHandler::handleInput(sf::Event Event)
{
	sf::Event::EventType type=Event.Type;

	switch(type)
	{
		case sf::Event::Closed:

		break;
		case sf::Event::KeyPressed:
		cout<<"A key has been pressed!\n";
		handleKeyPress(Event.Key.Code);
		
		break;

	}

}
void InputHandler::update()
{
	movement=false;
	move_dir.setX(0);
	move_dir.setY(0);
}
bool InputHandler::hasMovement()
{
	return movement;
}
Point2D* InputHandler::getMovement()
{
	return &move_dir;
}