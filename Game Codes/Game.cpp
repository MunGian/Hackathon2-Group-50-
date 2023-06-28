#include "Game.h"
#include <iostream>
#include <iomanip>
using namespace std;

Game::Game()
{
	countStage = 1;
	quitGame = 1; //1 is no, 2 is yes;
	weaponSize = 20;

	for(int i = 0; i < weaponSize; i++)
	{
		weapons[i] = "0";
	}
}
Game::~Game()
{}

void Game::MainPage()
{
	system("cls");

	cout << "---------------------------------------------------------" << endl;
	cout << "    Welcome to 'Infinity Conquest: Rise of the Stones' "   << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << " 1. New Player " << endl;
	cout << " 2. Existing Player " << endl;
	cout << " 3. Display saved player info"<< endl;
	cout << " 4. How to play" << endl;
	cout << " 5. Credit" << endl;
	cout << " 6. Quit game" << endl;
	cout << endl;
	cout << "Enter your choice" << endl;
	cout << ">> ";
	cin >> choice;
	cout << endl << endl;

	while (choice < 1 || choice > 6)
	{
		cout << "Invalid input, only enter integer from 1 to 6." << endl;
		cout << ">> ";
		cin >> choice;
		cout << endl << endl;
	}

	system("cls");

	switch (choice){
		case 1:
			Start();
			break;
		case 2:
			cout << "------------------------------------------------" << endl;
			cout << "         Your Previous Saved Progress"            << endl;
			cout << "------------------------------------------------" << endl;
			room.loadProgress(stage, weapons,weaponSize);
			countStage = stage;
			cout << endl;
			cout << "Loading your previous progress......" << endl;
			cout << "Press enter to continue......" << endl << endl;
			cin.get();
			cin.get();
			EnterRoom();

			break;
		case 3:
			cout << "------------------------------------------------" << endl;
			cout << "         Your Previous Saved Progress"            << endl;
			cout << "------------------------------------------------" << endl;
			room.showSavedProgress(stage, weapons,weaponSize); //Show previous saved info
			break;
		case 4:
			GameDetails();

			break;
		case 5:
			cout << "Authors:" << endl;
			cout << "Chau Hong Feng" << endl;
			cout << "Soo Mun Gian" << endl;
			cout << "Ang Chin Zhen" << endl;
			break;
	}
	if(choice == 6){
		cout << "Are you sure? (yes/no)" << endl;
		cout << ">> ";
		cin >> option;

		while(option != "yes" && option != "Yes" && option != "no" && option != "No")
	{
		cout << endl;
		cout << "Invalid input, only enter yes or no." << endl;
		cout << ">> ";
		cin >> option;
	}

	cout << endl;
	if(option == "yes" || option == "Yes")
	{
		cout << "See you and Bye!" << endl;
		cin.get();
		quitGame = 2;
	}
	else
		MainPage();
	}
}

void Game::Start()
{
	cout << "You find yourself in a mysterious space, surrounded by shimmering stars and cosmic wonders. " << endl;

    cin.get();

	cout << "But something feels off.";
	cout << "You sense a darkness lurking nearby, shrouding your surroundings in an unsettling blackness." << endl;

    cin.get();

	cout << "In the midst of your apprehension, your hand brushes against something cold and metallic." << endl;;
	cout << "Instinctively, you grasp it and feel a surge of warmth emanating from within.";
	cout << "It's a torchlight!" << endl;;
    cin.get();

	cout << "As the light dances across the terrain, you discover that you are not in a space but on a mysterious, deserted beach." << endl;
	cout << "The crashing waves and salty breeze add an eerie ambiance to the atmosphere." << endl;
    cin.get();

	cout << "Just as you begin to take in your surroundings, a peculiar note catches your attention." << endl;
	cout << "It seems to have appeared out of thin air, demanding your curiosity." << endl;
	cout << "You gingerly unfold the note and read its ominous contents." << endl;
    cin.get();

	cout << "------ Message from the Haunter ------" << endl;
	cout << "LEAVE HERE!!!!!" << endl;
	cout << "YOU WILL NOT ABLE TO SURVIVE" << endl;
    cin.get();

	cout << "A chill runs down your spine as you ponder the meaning behind the message." << endl;
	cout << "But before you can fully process its warning," << endl;
	cout << "You notice another page attached to the note, seemingly written in a different hand." << endl;
    cin.get();

	cout << "The words on the page speak of brave warriors who disregarded the Haunter's advice, venturing further into the realm of chaos." << endl;
	cout << "The author seems desperate, urging you to remember their advice if you dare to follow in their footsteps." << endl;
    cin.get();

	cout << "The realization sinks in - you have unwittingly stepped into the dreaded realm of chaos, a place fraught with peril and uncertainty.";
	cout << " The only way out is to collect all five mysterious stones scattered across the islands within this realm." << endl;
	cin.get();

	cout << "Are you ready, brave adventurer?";
	cout << "The fate of your escape rests in your hands, and the journey ahead promises both danger and discovery." << endl;
	cout << "Step forth into the unknown, and may the cosmos guide your path." << endl;
	cin.get();

	cout << "Get in the realm." << endl;
	cout << "Press 1 for Yes, 2 for No" << endl << endl;
	cout << ">> ";
	cin >> choice;
	cout << endl;

	if(choice==1)
	{
		cout << "Get yourself ready......" << endl;
		cout << "Press enter to continue......" << endl;
		cin.get();
		cin.get();
		system("cls");
		EnterRoom();
	}

	else if(choice == 2)
		cout << "You are exiting the game......" << endl;

}

void Game::EnterRoom()
{
			room.roomList();

			countStage++; // declared in private:


			if(countStage < 6)
			{
				string option;
				cout << endl;
				cout << "Before proceeding to the following chapter, do you want to save your current progress? (yes/no)" << endl;
	        	cout << ">> ";
	        	cin >> option;


        		while(option != "yes" && option != "Yes" && option != "no" && option != "No")
				{
					cout << endl;
					cout << "Invalid input, only enter Yes or No." << endl;
					cout << ">> ";
					cin >> option;
				}

				cout << endl;
	        	if(option == "yes" || option == "Yes"){

	        		room.saveProgress();
	        		cout << endl;
		    		cout << "You have saved the current progress......" << endl;
		    		cout << "Enjoy your following journey in the story......" << endl;
		    		cin.get();
		    		cout << endl;
	 	        }
	 	        else
	 	        {
					cout << "You did not save the current progress......" << endl;
					cin.get();
					cout << endl;
	 	 	    }

	 	        cout << "Do you wish to continue to next chapter? (yes/no)" << endl;
	 	        cout << "Enter 'Yes' to continue, 'No' to return to main page." << endl;
	 	        cout << ">> ";
	 	        cin >> option;

	 	        while(option != "yes" && option != "Yes" && option != "no" && option != "No")
				{
					cout << endl;
					cout << "Invalid input, only enter 'Yes' or 'No'." << endl;
					cout << ">> ";
					cin >> option;
				}

	 	        if(option == "yes" || option == "Yes"){

	        		system("cls");
					EnterRoom(); //recursion function until the player finishes all three stages
	 	        }
	 	        else
	 	        {
	 	        	cout << endl;
	 	        	cout << "Hope to see you next time!" << endl;
	        		cout << "You are returning to main page......" << endl;
	        		cin.get();
	        		cin.get();
	        		MainPage();
				}
			}
}

void Game::GameDetails()
{
		cout << "------------------------------------------------" << endl;
		cout << "                  Weapon Details"                   << endl;
		cout << "------------------------------------------------" << endl << endl;

		cout << setw(3) << " No.         Weapon          Damage" << endl;
		cout << setw(3) << " ----   ----------------  ------------" << endl;
		cout << setw(3) << " 1.     Sword                 30" << endl;
		cout << setw(3) << " 2.     Magic Staff           35" << endl;
		cout << setw(3) << " 3.     Gun                   32" << endl;
		cout << setw(3) << " 4.     Sword of Zenith      100" << endl;

		cout << endl << endl;

		cout << "------------------------------------------------" << endl;
		cout << "                  Boss Details"                   << endl;
		cout << "------------------------------------------------" << endl << endl;

		cout << setw(3) << " Level.        Weapon        Damage" << endl;
		cout << setw(3) << "-------    ----------------  --------" << endl;
		cout << setw(3) << "   1.       Crocodile           10" << endl;
		cout << setw(3) << "   2.       Fire Dragon         20" << endl;
		cout << setw(3) << "   3.       Edeth The Dragon    30" << endl;

		cout << endl << endl;

		cout << "------------------------------------------------" << endl;
		cout << "                 In-Game Details"                   << endl;
		cout << "------------------------------------------------" << endl << endl;

		cout << "1. The player will embark on a storyline centered around collecting the Infinity Stones and engaging in battles with powerful creatures known as bosses." << endl;
		cout << "2. During boss battles, the player can choose from a variety of available weapons to attack the boss." << endl;
		cout << "3. The player and the boss will take turns attacking each other." << endl;
		cout << "4. Both the player and the boss have the opportunity to dodge incoming attacks and land critical hits on their opponent, dealing double the damage." << endl;

		cout << endl << endl;

		cout << "------------------------------------------------" << endl;
		cout << "                How to Play"                   << endl;
		cout << "------------------------------------------------" << endl << endl;
		cout << "1. The game is in text based, meaning that the player will input keywords into the panel." << endl;
		cout <<" 2. Once enter the game, the user can press enter to allow the story to continue." << endl;
		cout << "3. When a decision is awaiting the player's response, the player can type in the keyword to progress with the story."<< endl;
		cout << "4. Player have the choice to enter (yes/no) or (1,2,3) depending on the situation." << endl;
		cout << "5. In battle mode, Player select their weapon that is displayed out, to be used at the bosses."<< endl;

}

bool Game::returnMainPage()
{
	if(quitGame == 2)
		return false;

	cout << endl;
	cout << "Do you want to return to Main Page? (yes/no)" << endl;
	cout << ">> ";
	cin >> option;

	while(option != "yes" && option != "Yes" && option != "no" && option != "No")
	{
		cout << endl;
		cout << "Invalid input, only enter yes or no." << endl;
		cout << ">> ";
		cin >> option;
	}

	cout << endl;
	if(option == "yes" || option == "Yes")
		return true;
	else
		return false;
}
