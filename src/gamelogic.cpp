#include "gamelogic.h"
#include "inputhandler.h"
#include <iostream>
using namespace std;

GameLogic::GameLogic() : player(Point2D(0,0))
{

}
void GameLogic::eventTest(){
	cout << "GameLogic: I recieved an event!\n";

}
void GameLogic::input(sf::Event event)
{


}
void GameLogic::update()
{
	InputHandler* inputhandler=Game::getInputHandler();
	if(inputhandler->hasMovement()){
		//TODO handle movement better here
		player.moveDir(inputhandler->getMovement());

	}
}