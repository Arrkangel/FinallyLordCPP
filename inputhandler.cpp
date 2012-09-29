
#include "inputhandler.h"
#include <SFML/Window.hpp>
#include <iostream>
#include "gamelogic.h"


using namespace std;



void InputHandler::handleInput(sf::Event Event)
{
	sf::Event::EventType type=Event.Type;

	switch(type)
	{
		case sf::Event::Closed:

		break;
		case sf::Event::KeyPressed:
		cout<<"A key has been pressed!\n";
		Game::getGameLogic()->eventTest();
		break;

	}

}