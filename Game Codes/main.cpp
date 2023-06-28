#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
	Game game;
	
	do
	{
		game.MainPage();
		
	}while(game.returnMainPage());
	
	return 0;
}
