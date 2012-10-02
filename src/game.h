#ifndef GAME_H
#define GAME_H
//Static class for connecting systems
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

#endif