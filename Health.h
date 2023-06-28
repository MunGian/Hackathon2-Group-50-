#ifndef HEALTH_H
#define HEALTH_H
#include <string>
using namespace std;

class Health{

	private:
	    int bossHealth;
	    int playerHealth;
	    int probability;

	public:
	    Health();
	    ~Health();
	    void bossTakeDamage(string, int); //Player deals damage to the boss based on the weapon used
		void playerTakeDamage(string weaponUsed, int countLevel, int criticalDamage); //Boss deals damage to the player based
	    void healthStatus(); //Display current health status for both the player and boss each round during the battle
	    void probabilityAction(string, int, int); //To generate chance for dodge, normal hit or critical hit for both the player and boss
	    bool playerIsDead(); //Return yes if player is dead, else return no
	    bool bossIsDead(); //Return yes if boss is dead, else return no
	    void healthReset(); //Reset the bossHealth and playerHealth to 100HP if the player decide to attempt the boss again after loses to the boss
};

#endif
