//Static class for connecting systems
#pragma once

class InputHandler;
class GameLogic;

class Game
{
private:
	static InputHandler* inputHandler;
	static GameLogic* gameLogic;
public:
	static void setInputHandler(InputHandler* _inputHandler);
	static void setGameLogic(GameLogic* _gameLogic);
	static GameLogic* getGameLogic();
	static InputHandler* getInputHandler();



};
InputHandler * Game::inputHandler;
GameLogic * Game::gameLogic;