#include "game.h"
InputHandler* Game::inputHandler;
GameLogic* Game::gameLogic;
void Game::setInputHandler(InputHandler * _inputHandler)
{
	inputHandler=_inputHandler;
}
void Game::setGameLogic(GameLogic * _gameLogic)
{
	gameLogic=_gameLogic;
}
GameLogic* Game::getGameLogic()
{
	return gameLogic;
}
InputHandler* Game::getInputHandler()
{
	return inputHandler;
}
