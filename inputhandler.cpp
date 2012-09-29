#include "inputhandler.h"
#include <iostream>



using namespace std;
bool InputHandler::isMovement(sf::Key::Code code)
{
	if(code=='w'){
		cout<<"W worked\n";
		return true;
	}
	return false;
}
void InputHandler::handleKeyPress(sf::Key::Code code)
{
	// switch(code)
	// {
	// 	case sf::Key::W:

	// 	break;

	// }
	bool b=isMovement(code);
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
		//Game::getGameLogic()->eventTest();
		break;

	}

}