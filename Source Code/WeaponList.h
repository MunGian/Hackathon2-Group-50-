#ifndef WEAPONLIST_H
#define WEAPONLIST_H
#include <string>
using namespace std;

	// Linked list class for weapons
class WeaponList{

	private:
		struct WeaponNode {
			string weapon;
			WeaponNode *next;
		};
	    WeaponNode *head;


	public:
	WeaponList();
	~WeaponList(); //Destroy Node when program terminates
	void appendWeapon(string); //Append weapons and items the player obtained in the storyline
	void deleteWeapon(string); //Delete weapons and items used in certain scenario
	bool searchWeapon(string); //Search for weapon, input validation
	void displayWeapons(); 	//Display only the weapons during battle
	void actionWeapons(string); //Display graphic animation for the weapon effect
	void saveWeapons(string []); //Load the previous saved weapons, allow player to continue the saved progress
	void stoneHistory(); //Simple story about the stones in our storyline
};


#endif
