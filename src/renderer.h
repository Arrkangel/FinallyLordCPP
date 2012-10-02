#ifndef RENDERER_H
#define RENDERER_H
#include <SFML/Graphics.hpp>
#include "gamelogic.h"

class Renderer
{
	private:
		sf::RenderWindow* App;
		GameLogic* gameLogic;
	public:
		Renderer(sf::RenderWindow* app,GameLogic* gl);
		void render();
};
#endif