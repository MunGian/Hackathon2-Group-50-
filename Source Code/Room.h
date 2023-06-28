#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <fstream>
#include "WeaponList.h"
#include "Health.h"

class Room
{
	private:
		int countLevel; //Current Boss level
		int storyNum; //Current storyline
		WeaponList weapon;
		Health health;

	public:
		Room();
		~Room();
		void roomList(); //Storyline that consists of five chapters
		void bossRoomList(); //Boss room that consists of three chapters
		void displayBossFigure(); //Display graphic animation for the 
		void bossRoomAction(); //Take turn to attack(Player and Boss)
		void saveProgress(); //Save the current proress to the text file
		void resumeProgress(int, string [], int); //Initialize all the previous saved progress, obtain important information like current stage and weapons from loadProgress function
		void loadProgress(int &stage, string [], int); //Load the previous saved progress, then call resumeProgress function
		void showSavedProgress(int &stage, string [], int); //Similar to loadProgress function, but does not call resumeProgress function as it just display player previous saved info

};

#endif
