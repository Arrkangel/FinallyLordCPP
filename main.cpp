#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "inputhandler.h"
#include "gamelogic.h"
#include "game.h"
#include "point2d.h"

using namespace std;
bool running=true;
sf::Window App(sf::VideoMode(800, 600, 32), "SFML Window");
InputHandler inputHandler;
GameLogic gameLogic;
void updateInput()
{
	sf::Event Event;
	while (App.GetEvent(Event))
	{
    	// Window closed
    	if (Event.Type == sf::Event::Closed)
        	running = false;
        inputHandler.handleInput(Event);

    
	}
}
void updateLogic()
{

}
void render()
{

}
int main()
{

	cout << "Welcome to FinallyLord! Initializing...\n";
	App.Create(sf::VideoMode(800, 600, 32), "Finally Lord");
	Game::setGameLogic(&gameLogic);
	Game::setInputHandler(&inputHandler);
	Point2D a(0,0);
	Point2D b(1,1);
	Point2D c;
	c=a.add(&b);
	cout << "Point add: " << c.getX() <<","<<c.getY()<<"\n";
	
	while (running)
	{
		updateInput();
		updateLogic();
		render();
    	App.Display();
	}
	cout << "See ya later! \n";
	return EXIT_SUCCESS;

	
}
