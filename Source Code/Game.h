#ifndef GAME_H
#define GAME_H
#include "Room.h"

using namespace std;

class Game
{
	private:
		Room room;
		int countStage; //Total of 5 chapters
		int quitGame;
		int choice;
		int weaponSize;
		string weapons[20]; //Use to store weapons and items
		int stage; //Use for load previous saved chapter
		string option;

	public:
		Game();
		~Game();
		void MainPage(); 
		void Start(); //Display some brief introduction
		void EnterRoom(); //Enter the storyline 
		void GameDetails(); //Display game details
		bool returnMainPage(); //Ask the player whether he wants to quit the program

};

#endif
