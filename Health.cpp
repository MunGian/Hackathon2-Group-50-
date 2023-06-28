#include "Health.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Health::Health()
{
	bossHealth = 100;
	playerHealth = 100;
};
Health::~Health()
{};

void Health::bossTakeDamage(string weaponUsed, int criticalDamage) //criticalDamage(1 is no, 2 is yes)
{

	if (weaponUsed == "Sword")
	{
	    if(criticalDamage == 1)
		{
			bossHealth -= 30;
	       	cout << "You have dealed 30 damage to the boss!";
	       	cin.get();
		}
		else
		{
			bossHealth -= 60;
			cout << "You strike a critical hit to the boss with " << weaponUsed << "!";
			cin.get();
	        cout << "and You have dealed 60 damage to the boss!";
	        cin.get();
		}
	}
	else if (weaponUsed == "Magic Staff")
	{
	    if(criticalDamage == 1)
		{
			bossHealth -= 35;
	        cout << "You have dealed 35 damage to the boss!" << endl;
	        cin.get();
		}
		else
		{
			bossHealth -= 70;
			cout << "You strike a critical hit to the boss with " << weaponUsed << "!";
			cin.get();
	       	cout << "and You have dealed 70 damage to the boss!";
	       	cin.get();
		}
	}
	else if (weaponUsed == "Gun")
	{
	    if(criticalDamage == 1)
		{
			bossHealth -= 32;
	        cout << "You have dealed 32 damage to the boss!" << endl;
	        cin.get();
		}
		else
		{
			bossHealth -= 64;
			cout << "You strike a critical hit to the boss with " << weaponUsed << "!";
			cin.get();
	        cout << "and You have dealed 64 damage to the boss!";
	        cin.get();
		}
	}
	else if (weaponUsed == "Sword of Zenith") {
	    bossHealth -= 100;
	    cout << "A thunder strike is launched by the Sword of Zenith towards the boss!";
	    cin.get();
	    cout << "You have dealed 100 damage to the boss!";
	    cin.get();
	}
}

void Health::playerTakeDamage(string weaponUsed, int countLevel, int criticalDamage) //criticalDamage(1 is no, 2 is yes)
{
	if(countLevel == 1)
	{
		if(criticalDamage == 1)
		{
			playerHealth -= 10;
			cout << "The boss has dealed 10 damage to you!" << endl;
			cin.get();
		}
		else if(criticalDamage == 2)
		{
			playerHealth -= 20;
			cout << "The boss strikes a critical hit to the you!";
			cin.get();
	        cout << "and the boss has dealed 20 damage to you!" << endl;
	        cin.get();
		}
	}

	else if(countLevel == 2)
	{
		if(criticalDamage == 1)
		{
			playerHealth -= 20;
			cout << "The boss has dealed 20 damage to you!" << endl;
			cin.get();
		}
		else if(criticalDamage == 2)
		{
			playerHealth -= 40;
			cout << "The boss strikes a critical hit to the you!";
			cin.get();
	        cout << "and the boss has dealed 40 damage to you!" << endl;
	        cin.get();
		}
	}

	else if(countLevel == 3)
	{
		if(criticalDamage == 1)
		{
			playerHealth -= 30;
			cout << "The boss has dealed 30 damage to you!" << endl;
			cin.get();
		}
		else if(criticalDamage == 2)
		{
			playerHealth -= 60;
			cout << "The boss strikes a critical hit to you!";
			cin.get();
	        cout << "and the boss has dealed 60 damage to you!" << endl;
	        cin.get();
		}
	}

}


void Health::healthStatus()
{
	cout << "Boss's Current Health = " << bossHealth << "HP" << endl;
	cout << "Your Current Health = " << playerHealth << "HP" << endl;
}

void Health::probabilityAction(string weaponUsed, int countLevel, int attackTarget) //attackTarget(1 is boss, 2 is player)
{
	srand((unsigned) time(0));
	probability = rand()%10;

	//Boss's and your probability after your action
	if(probability < 2) //Dodge your attack
	{
		if (attackTarget == 1)
		{
			cout << "The boss has dodged your attack!";
	    	cin.get();
		}
		else if (attackTarget == 2)
		{
			cout << "You have dodged the boss's attack!" << endl;
	    	cin.get();

		}

	}
	else if(probability < 8 && probability > 1) //Lauch normal attack to the boss
	{
	    if (attackTarget == 1)
		{
			bossTakeDamage(weaponUsed, 1);
		}
		else if (attackTarget == 2)
		{
			playerTakeDamage(weaponUsed, countLevel, 1);
		}
	}
	else if(probability >= 8)
	{
		if (attackTarget == 1)
		{
			bossTakeDamage(weaponUsed, 2);
		}
		else if (attackTarget == 2)
		{
			playerTakeDamage(weaponUsed, countLevel, 2);
		}
	}
}

bool Health::playerIsDead(){
	if(playerHealth <= 0)
	    return true;
	else
	    return false;
}

bool Health::bossIsDead(){
	if(bossHealth <= 0)
	    return true;
	else
	    return false;
}

void Health::healthReset()
{
	playerHealth = 100;
	bossHealth = 100;
}
