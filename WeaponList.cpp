#include "WeaponList.h"
#include <iostream>
#include <string>

using namespace std;

WeaponList::WeaponList() {

	head = nullptr;
}

WeaponList::~WeaponList() { //Destroy Node when program terminates

  WeaponNode *nodePtr, *nextNode;

  nodePtr = head;

  while(nodePtr)
  {
    nextNode = nodePtr->next;
    delete nodePtr;
    nodePtr = nextNode;
  }
}

void WeaponList::appendWeapon(string newWeapon) {

	WeaponNode *newNode, *nodePtr;
    newNode = new WeaponNode;
    newNode->weapon = newWeapon;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    }
	else {

        nodePtr = head;

        while (nodePtr->next != nullptr)
            nodePtr = nodePtr->next;

        nodePtr->next = newNode;
    }

}

void WeaponList::deleteWeapon(string weaponToDelete) {

    WeaponNode *nodePtr, *previousNode;

    if (head == nullptr) {
        return;
    }

    if (head->weapon == weaponToDelete) {
    	nodePtr = head;
        head = head->next;
        delete nodePtr;
        return;
    }
	else{

        nodePtr = head;
 		previousNode = nullptr;

   		while(nodePtr != nullptr && nodePtr->weapon != weaponToDelete) {
        		previousNode = nodePtr;
        		nodePtr = nodePtr->next;
     		 }

	    if(nodePtr)
		{
		    previousNode->next = nodePtr->next;
		    delete nodePtr;
		}
  	}
}

bool WeaponList::searchWeapon(string weaponSearch)
{
	WeaponNode *nodePtr;

    if (head->weapon == weaponSearch) {
        return true;
    }
	else{

        nodePtr = head;

   		while(nodePtr != nullptr && nodePtr->weapon != weaponSearch)
        		nodePtr = nodePtr->next;

	    if(nodePtr)
		    return true;
  	}

  	return false; //if weapon is not found
}

void WeaponList::displayWeapons() {

  WeaponNode *nodePtr;

  nodePtr = head;

  while(nodePtr)
  {
  	if(nodePtr->weapon == "Power Stone" || nodePtr->weapon == "Soul Stone" || nodePtr->weapon == "Time Stone" || nodePtr->weapon == "Space Stone" || nodePtr->weapon == "Reality Stone" || nodePtr->weapon == "rose")
  	{
    	nodePtr = nodePtr->next;
	}

	else
	{
		cout << nodePtr->weapon << endl;
		nodePtr = nodePtr->next;
	}
  }

  cout << endl;
}

void WeaponList::actionWeapons(string action)
{
	if(action == "Magic Staff")
			{
				cout << endl;
				cout <<"         _ ._  _ , _ ._" << endl;
				cout <<"       (_ ' ( `  )_  .__)" << endl;
				cout <<"     ( (  (    )   `)  ) _)" << endl;
				cout <<"    (__ (_   (_ . _) _) ,__)" << endl;
				cout <<"        `~`\\ ' . //`~` " << endl;
				cout <<"             ;   ;" << endl;
				cout <<"             /  \\ " << endl;
				cout <<"__________  / __ \\ _____________" << endl;
				cout << endl << endl;
				cout << "What a great fire magic!" << endl << endl;
			}

			else if(action == "Sword")
			{
				cout << "           _____   _____" << endl;
				cout << "         //    \\ //    \\ "<< endl;
				cout << "     ,   |       '       |" << endl;
				cout << "     I __L________       L__" << endl;
				cout << "O====IE__________/     //___ >" << endl;
				cout << "     I     \\         //" << endl;
				cout << "     `       \\      //" << endl;
				cout << "               \\   // "<< endl;
				cout << "                 '" << endl;
				cout << endl << endl;
				cout << "Gosh!!! Great sword skill!" << endl << endl;
			}

			else if(action == "Gun")
			{
				cout << "          ^         " << endl;
				cout << "         | |        " << endl;
				cout << "       @#####@      " << endl;
				cout << "     (###   ###)-.  " << endl;
				cout << "   .(###     ###) \\ " << endl;
				cout << "  /  (###   ###)   )" << endl;
				cout << " (=-  .@#####@|_--/ " << endl;
				cout << "/\\    \\|l|_/ (\\  " << endl;
				cout << "(=-\\     |l|    /   " << endl;
				cout << " \\  \\ __|l|___/    " << endl;
				cout << "/\\      |_|   /    " << endl;
				cout << "(=-\\ ________/\\   " << endl;
				cout << " \\             /    " << endl;
				cout << "  \\_ ________/     " << endl;
				cout << "     #  ----  #     " << endl;
				cout << "     #   __   #       " << endl;
				cout << "   \\ ######## //      " << endl;
				cout << endl << endl;
				cout << "Bang!!! Great gun skill!" << endl << endl;
	}

			else if (action=="Sword of Zenith")
			{
				cout << endl;
				cout << "                             _..._" << endl;
				cout << "                           .'.   .'." << endl;
				cout << "                          (   : :   )" << endl;
				cout << "                           '._:_:_.'" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                             (:::)" << endl;
				cout << "                            //:::\\" << endl;
				cout << "                           //     \\" << endl;
				cout << "                          .'       '." << endl;
				cout << "                      _.-'\\  (*)  //'-._" << endl;
				cout << "                   .-'__.--\\     //--.__'-." << endl;
				cout << "                 .'.-'     |\\   //|     '-.'." << endl;
				cout << "               .'.'        | \\ // |        '.'." << endl;
				cout << "             //.'          ||\\*// |          '.\\" << endl;
				cout << "            //'            |'  |  ||            '\\" << endl;
				cout << "(`-._(`-._(`-._..          ||  |  '|          .._.-')_.-')_.-')" << endl;
				cout << " )    )    )   ||          |   |  ||          ||   (    (    (" << endl;
				cout << "(`-._(`-._( `._||          |'  |  ||          ||_.-')_.-')_.-')" << endl;
				cout << " )    )    )   ||          |   |   |          ||   (    (    (" << endl;
				cout << " )    )    )   ||          |   |   |          ||   (    (    (" << endl;
				cout << " )    )    )   ||          |'  |  ||          ||   (    (    (" << endl;
				cout << "(`-._(`-._( `._||          ||  |   |          ||_.-')_.-')_.-')" << endl;
				cout << " )    )    )   ||          |   |  ||          ||   (    (    (" << endl;
				cout << " `-._.`-._.`-._||   _.-- - |'  |  '| - --._   ||_.-'._.-'._.-'" << endl;
				cout << "               ||.'  .    _||  |  ||_    .  '.||" << endl;
				cout << "               |(     `---..._____...---'     )|" << endl;
				cout << "              \\   '. _.-.  . - - .  .-._ .'   //" << endl;
				cout << "                `-._       '._ * _.'       _.-'" << endl;
				cout << "                    `---....__ _ __....---`" << endl;
				cout << "                           |   :  ||" << endl;
				cout << "                           ||  |  '|" << endl;
				cout << "                           |'  |  ||" << endl;
				cout << "                           ||  |  '|" << endl;
				cout << "                           |   |  ||" << endl;
				cout << "                           |'  |  '|" << endl;
				cout << "                           |'     '|" << endl;
				cout << "                           \\.   .//" << endl;
				cout << "                            \\. .//" << endl;
				cout << "                             \\.//" << endl;
				cout << "                               V" << endl;
				cout << endl;
			}
}

void WeaponList::saveWeapons(string allWeapons[])
	{
		WeaponNode *nodePtr;
		nodePtr = head;

		for(int i = 0; i < 20;i++)
		{
			if(nodePtr != nullptr)
			{
				allWeapons[i] = nodePtr->weapon;
				nodePtr = nodePtr->next;
			}
			else
				break;
		}
}

void WeaponList::stoneHistory()
{
	cout << "In a distant realm known as Noxian,";
	cin.get();
	cout << "an ancient civilization known as the Noxia absorbed the mystical energies of the cosmos";
	cin.get();
	cout << "and created six powerful artifacts known as the Mythic Stones.";
	cin.get();
	cout << "These stones were said to possess immense power and represented different aspects of the universe."<< endl;
	cin.get();

	cout << "Time Stone : " << endl;
	cout << "A stone that dominates the time." << endl;
	cin.get();
	cout << "It allows someone to control the flow of time, to slow it down, speed it up, or even travel through it into the past and glimpse the future" << endl;
	cin.get();

	cout << "Space Stone : " << endl;
	cout << "A stone that dominates the space." << endl;
	cin.get();
	cout << "Possessing the Space Stone granted the ability to teleport instantly to any location in the universe, as well as to create portals, bend distances, and traverse dimensions." << endl;
	cin.get();

	cout << "Soul Stone : " << endl;
	cout << "A stone that dominates the soul of any creatures." << endl;
	cin.get();
	cout << "It represents the essence of life and consciousness." << endl;
	cin.get();
	cout << "It granted the ability to peer into someone's very essence, control their emotions, and even manipulate their life force" << endl;
	cin.get();

	cout << "Reality Stone : " << endl;
	cout << "A stone that dominates the reality and virtual." << endl;
	cin.get();
	cout << "It could bend the laws of physics and reshape matter according to their will." << endl;
	cin.get();;
	cout << "With the Reality Stone, one could create illusions and create a world apart from reality." << endl;
	cin.get();

	cout << "Power Stone : " << endl;
	cout << "A stone that dominates the energy." << endl;
	cin.get();
	cout << "The Power Stone granted its wielder unparalleled strength, enabling them to overpower any opponent." << endl;
	cin.get();

	cout << "Mind Stone : " << endl;
	cout << "A stone that dominates the mental abilities." << endl;
	cin.get();
	cout << "With the Mind Stone, one could delve into the thoughts and memories of others, control their minds, and enhance their own mental abilities to extraordinary levels." << endl;
	cin.get();

	cout << "After the last battle of Noxian Warrior and Edeth. Mythic Stones returned to their respective places in the cosmos.";
	cin.get();
	cout <<	"However, the Mind Stone, being unstable, shattered into fragments that scattered across the universe.";
	cin.get();
}
