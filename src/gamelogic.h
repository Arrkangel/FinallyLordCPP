#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include "game.h"
#include "player.h"
#include <SFML/Window.hpp>

enum inputState
{
	MOVEMENT
};
class GameLogic
{
private:
	Player player;

public:
	GameLogic();
	void input(sf::Event event);
	void eventTest();
	void update();
};
#endif