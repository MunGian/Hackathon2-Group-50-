#include "Room.h"
#include <iostream>
#include <string>
using namespace std;

Room::Room()
{
	countLevel = 1;
	storyNum = 1;
}

Room::~Room()
{}

void Room::roomList()
{
    cout << endl;

	string option; //Enter choice of weapon
	int choice; //choices
	switch (storyNum)
    {

        case 1:
        	cout << "---------------------------------" << endl;
 			cout << "            Chapter 1" << endl;
 			cout << "---------------------------------" << endl;
			cout << "As you look around, towering trees surround you, enveloped in an eerie silence." << endl;
			cin.get();

			cout << "You fumble around bewilderedly and accidentally touch something in the shape of a box." << endl;
			cin.get();

			cout << "Do you want to open it?" << endl;
			cout << "Enter 'Yes' or 'No': " << endl;
			cout << ">> ";
			cin>>option;
			cout << endl;

			while(option != "yes" && option != "Yes" && option != "no" && option != "No")
			{
				cout << endl;
				cout << "Invalid input, only enter 'Yes' or 'No'." << endl;
				cout << ">> ";
				cin >> option;
			}

			if (option == "Yes" || option == "yes"){
				cout << "It's a torchlight! This will definitely help you in dark." << endl << endl;
				cin.get();
				cin.get();
			}
			else
			{
				cout << "You didn't open the box......" << endl << endl;
				cin.get();
				cin.get();
			}

			cout << "Heart pounding, you cautiously move forward, your senses heightened by the unknown." << endl;
            cout << "Unseen eyes seem to watch your every step." << endl;
            cin.get();

			cout << "You can't believe your eyes as you witness the sight of moving plants and haunting animals observing your every move." << endl;
			cin.get();

			cout << "You start running, but suddenly find yourself trapped by an unknown force." << endl;
			cin.get();

			cout << "To your surprise, a chest materializes right in front of you!" << endl;
			cout << "Will you risk opening it?" << endl;
			cout << "Enter 'Yes' or 'No': " << endl;
			cout << ">> ";
			cin >> option;
			cin.ignore();

			while(option != "yes" && option != "Yes" && option != "no" && option != "No")
			{
				cout << endl;
				cout << "Invalid input, only enter 'Yes' or 'No'." << endl;
				cout << ">> ";
				cin >> option;
			}

			cout << endl;
			if (option == "Yes" || option == "yes") {
    			cout << "You bravely open the chest!" << endl;
    			cout << "Inside, you find a Sword, a Magic staff and a Gun! However, they are too heavy, and you can only choose one!" << endl;
    			cout << "Enter Sword, Magic Staff, or Gun: " << endl;
    			cout << ">> ";
    			getline(cin, option);

				while(option != "Sword" && option != "Magic Staff" && option != "Gun")
				{
					cout << endl;
					cout << "Invalid input, only enter Sword, Magic Staff or Gun." << endl;
					cout << ">> ";
					getline(cin, option);
				}

				if(option == "Sword")
					weapon.appendWeapon("Sword");

				else if(option == "Magic Staff")
					weapon.appendWeapon("Magic Staff");

				else if(option == "Gun")
					weapon.appendWeapon("Gun");

				cout << endl;
				cout << option << " has been added into your weapon list!";
				cin.get();
				cout << endl;
	        }

	        else if (option == "No" || option == "no") {
    			cout << "You choose to not approach the chest!";
    			cin.get();
    			cout << "And you are going to leave for your destination.";
    			cin.get();
    			cout << endl;
    			cout << "Out of the blue, the chest opens itself!";
    			cin.get();
    			cout << endl;
    			cout << "Inside, you find a Sword, a Magic staff and a Gun! However, they are too heavy, and you can only choose one!" << endl;
    			cout << "Enter Sword, Magic Staff, or Gun: " << endl;
    			cout << ">> ";
    			getline(cin, option);

				while(option != "Sword" && option != "Magic Staff" && option != "Gun")
				{
					cout << endl;
					cout << "Invalid input, only enter Sword, Magic Staff or Gun." << endl;
					cout << ">> ";
					getline(cin, option);
				}

				if(option == "Sword")
					weapon.appendWeapon("Sword");

				else if(option == "Magic Staff")
					weapon.appendWeapon("Magic Staff");

				else if(option == "Gun")
					weapon.appendWeapon("Gun");

				cout << endl;
				cout << option << " has been added into your weapon list!";
				cin.get();
				cout << endl;
	    }


			cout << "Feeling empowered by your chosen item, you press forward into the mysterious forest.";
			cin.get();

			cout << "In the distance, you spot a peculiar sign and rush towards it." << endl;
			cin.get();

			cout << "------ WELCOME TO THE ENCHANTED FOREST ------" << endl;
			cout << "------ BEWARE OF YOUR SURROUNDINGS ------" << endl;
			cin.get();

			cout << "Suddenly, you come face to face with an unknown creature and find yourself under attack." << endl;
			cin.get();

			cout << "Quickly, you reach for your weapon of choice." << endl << endl;
			cout << "Choose your weapons: " <<endl;;
			weapon.displayWeapons();
			cout << ">> ";
			getline(cin, option);

			while(!weapon.searchWeapon(option)) //check whether the weapon entered is in the list
			{
				cout << endl;
				cout << option << " is NOT found in your weapon list!" << endl;
				cout << "Choose a weapon available in your weapon list:" << endl;
				cout << ">> ";
				getline(cin, option);
			}

			weapon.actionWeapons(option);

			cout << endl;
			cout << "With skill and determination, you defeat the creature." << endl;
			cin.get();
			cout << "But unfortunately, your " << option << " is lost in the battle." << endl << endl;
			weapon.deleteWeapon(option);
			cin.get();
			option = "";

			cout << "Fortunately, you stumble upon some items that were previously carried by the creatures." << endl;
			cout << " Sword +1 " << endl;
			cout << " Magic Staff +1 " << endl;
			cout << " Gun +1 " << endl;
			cin.get();

			weapon.appendWeapon("Sword");
			weapon.appendWeapon("Magic Staff");
			weapon.appendWeapon("Gun");

			cout << "You've come to a fork in the road, where every intersection is shrouded in darkness." << endl;
			cout << "You have to choose to go right or left." << endl;
			cout << "Enter 'Right' or 'Left': " << endl;
			cout << ">> ";
			cin >> option;

			while(option != "Right" && option != "right" && option != "Left" && option != "left")
			{
				cout << endl;
				cout << "Invalid input, only enter 'Right' or 'Left'." << endl;
				cout << ">> ";
				cin >> option;
			}
			cout << endl;
			if(option == "Right" || option == "right"){
				cout << "Despite feeling hesitant, you decided to choose the right path." << endl;
				cin.get();

				cout << "The road is full of skulls and you start to wonder if you are going the wrong way." << endl;
				cin.get();

				cout << "But you are NO WAY HOME." << endl;
				cin.get();

				cout << "After an unknown duration of walking,you saw light shining in the distance ." << endl;
				cin.get();

				cout << "You run to that place,hoping that it would lead you to the exit." << endl;
				cin.get();

				cout << "But it didn't.Instead you saw an ancient temple." << endl;
				cin.get();

				cout << "It looks like the temple appears to be inhabited." << endl;
				cin.get();

				cout << "Just a moment,a wizard look man appear behind you." << endl;
				cin.get();

				cout << "Wizard : You are here faster than I had expected." << endl;
				cin.get();

				cout << "You : Do you know me?" << endl;
				cin.get();

				cout << "Wizard : The moment you stepped in the forest I can feel your spirit." << endl;
				cin.get();

				cout << "Wizard : You are the tenth warrior who have the courage to enter the forest." << endl;
				cin.get();

				cout << "Wizard : But depends on you whether you can leave the world or not." << endl;
				cin.get();

				cout << "In the blink of an eye, you witnessed the man's necklace glowing with an enchanting green light." << endl;
				cin.get();

				cout << "And then he took a germ from his necklace." << endl;
				cin.get();

				cout << "Wizard : Take it or you won't be able to survive." << endl;
				cin.get();

				cout << "Will you take the germ?" << endl;
			    cout << "Enter 'Yes' or 'No': " << endl;
			    cout << ">> ";
			    cin >> option;

			    while(option != "yes" && option != "Yes" && option != "no" && option != "No")
				{
					cout << endl;
					cout << "Invalid input, only enter 'Yes' or 'No'." << endl;
					cout << ">> ";
					cin >> option;
				}

				cout << endl;
			    if(option == "yes" || option == "Yes"){
			    	cout << "You decide to take the germ......" << endl;
			    	weapon.appendWeapon("Time Stone");
			    	cin.get();
				}
				else
				{
					cout << "You decide not to take the germ......"<< endl;
					cin.get();
				}
		}
			else{
				cout << "Despite feeling hesitant, you decided to choose the left path." << endl;
				cin.get();

				cout << "In the blink of an eye,you get into a fabulous house,unlike the scene when you cboosing the path." << endl;
				cin.get();

				cout << "This must be my illusion, you muttered to yourself." << endl;
				cin.get();

				cout << "Yes you are, but it's my illusion,not yours." << endl;
				cin.get();

				cout << "You turned your head and you saw a wizard look man standing behind you." << endl;
				cin.get();

				cout << "You : Who are you.Why you bring me in your illusion? " << endl;
				cin.get();

				cout << "Wizard : What do you mean I bring you to my illusion." << endl;
				cout << "You are the one broke into my illusion." << endl;
				cout << "Maybe you will encounter another things if you pick the right path." << endl;
				cin.get();

				cout << "You : How do you know where I came from.Tell me how to get out of this hell." << endl;
				cin.get();

				cout << "Wizard : Don't be so mad." << endl;
				cin.get();

				cout << "EVERYTHING IS DESTINED IN THE PAST AND IN THE FUTURE." << endl;
				cin.get();

				cout << "Thw wizard then pass you an enchanting green light germs." << endl;
				cin.get();

				cout << "You even have no time to react." << endl;

			}

			cout << "Suddenly, you feel a powerful force pulling you towards a different location......" << endl;
			cin.get();
			cout << "You saw a sign and you approch to see the word on it." << endl;
			cin.get();
			bossRoomList();

			cout << endl;

			cout << "It was so close! You thought you was going to leave this world.......";
			cin.get();

			if(!weapon.searchWeapon("Time Stone")) //Enter hidden storyline if did'nt pick up the the germ just now
			{
				cout << "Suddenly, you saw a stone dropped on the floor after you killed the creature.";
				cin.get();
				cout << "You come nearby and notice that it is a Time Stone! You have picked it up." << endl;
				cin.get();
				cout << "Just a moment you touch the Time Stone, you feel dizzy and faint......" << endl;
				cin.get();
				weapon.appendWeapon("Time Stone");
			}
			else
			{
				cout << "Suddenly, you notice the germ you have taken just now is shinning......";
				cin.get();
				cout << "A whispering sound is heard, saying that it is the Time Stone" << endl;
				cout << "But you didn't see anyone when you look around your surrounding!" << endl;
				cin.get();
				cout << "Just a moment you touch the Time Stone, you feel dizzy and faint......" << endl;
				cin.get();
			}
			break;

        case 2:

 			cout << "---------------------------------" << endl;
 			cout << "            Chapter 2" << endl;
 			cout << "---------------------------------" << endl;
			cout << "As you awaken, you find yourself surrounded by a frozen landscape." << endl;
			cin.get();

			cout << "With great effort, you manage to take a few steps."<< endl;
			cin.get();

			cout << "But the bitter cold overwhelms you, and you collapse." << endl;
			cin.get();

			cout << "When you get awaked again.You are carried by a particularly muscular man and with fury jacket made by animal." << endl;
		    cin.get();

		    cout << "The man notices your awakening and decides to make camp in a nearby cave to shield you from the biting cold." << endl;
		    cin.get();

		    cout << "In conversation, you learn that you have been transported to the ice age. " << endl;
		    cout << "Possibly a consequence of the Time Stone's power." << endl;
		    cin.get();

		    cout << "Curiosity piqued, you venture out for a walk amidst the frozen tundra." << endl;
		    cin.get();

			cout << "Suddenly, a herd of mammoths charges towards you, their massive forms threatening your safety. " << endl;
			cin.get();

			cout << "Quickly, you reach for your weapon of choice." << endl;
			cout << "Choose your weapons: " << endl;
			weapon.displayWeapons();
			cout << ">> ";
			getline(cin, option);

			while(!weapon.searchWeapon(option)) //check whether the weapon entered is in the list
			{
				cout << endl;
				cout << option << " is NOT found in your weapon list!" << endl;
				cout << "Choose a weapon available in your weapon list:" << endl;
				cout << ">> ";
				getline(cin, option);
			}

			weapon.actionWeapons(option);

			cout << "To your dismay, your weapon shatters upon contact, rendering you defenseless against the mammoths." << endl;
			cin.get();
			cout << "But unfortunately, your " << option << " is lost in the battle." << endl;
			weapon.deleteWeapon(option);

			cout << "In a surprising turn of events, the man swiftly hurls his round-shaped shield." << endl;
			cout << "He begins to levitate and repel the charging mammoths." << endl;
			cin.get();

			cout << "Suprisingly,it shield can flow by its own and knock the mamoths away." << endl;
			cin.get();

			cout << "Filled with gratitude, you attempt to thank the man." << endl;
			cout << "Only to realize that he is rapidly aging before your eyes." << endl;
			cin.get();

			cout << "As he lies in your embrace, he reveals that he has exhausted his remaining powers." << endl;
			cout << "He is so grateful he having lived a remarkable 179 years.." << endl;
			cin.get();

			cout << "Before his final breath, he bequeaths you his rounded shield and a mysterious artifact known as the Tesseract(Space Stone)." << endl;
			cin.get();

			cout << "Suddenly, the fabric of space begins to distort around you, and consciousness slips away." << endl;
			weapon.appendWeapon("Space Stone");
			cin.get();

			break;

        case 3:
        	cout << "---------------------------------" << endl;
 			cout << "            Chapter 3" << endl;
 			cout << "---------------------------------" << endl;
 			cout << "You wake up in a extremely dark place.";
 			cin.get();
 			cout << "You cannot even see your hands!" << endl;
 			cin.get();
 			cout << "However, you still decided to stand up and seek for a way out." << endl;
 			cin.get();
			cout << "The path seems dark." << endl;
			cin.get();

    		cout << "Do you willing to continue the path?" << endl;
    		cout << "Enter 'Yes' or 'No': " << endl;
    		cout << ">> ";
    		cin >> option;

			while(option != "yes" && option != "Yes" && option != "no" && option != "No")
			{
				cout << endl;
				cout << "Invalid input, only enter 'Yes' or 'No'." << endl;
				cout << ">> ";
				cin >> option;
			}
			cout << endl;

			if(option == "yes" || option == "Yes"){
				cout << endl;
	    		cout << "The place brightens up, you realize that you have been transferred to Nano Gauntlet. ";
	    		cin.ignore();
	    		cin.get();
				cout << "And you notice a rose under your feet."<< endl << endl;
				cout << "You have a feeling that this may bring good fortune for journey ahead.Pick up?(yes/no)"<< endl;
				cout << ">> ";
	    		cin >> option;
	    		cin.ignore();

	    			if(option == "yes" || option == "Yes"){
	    				cout << endl;
	       			 	cout << "You knee down and pick up the rose." << endl;
	       			 	cin.get();
	       				weapon.appendWeapon("rose");
	                }
	                else
	                {
	                cout << endl;
						cout << "You did not pick up the rose.";
						cin.get();
					}
 	        }
			else
			{
				cout << "You pick the other way around." << endl;
				cin.get();
			}
 	        cout << endl;
			cout << "You continue down the pathway." << endl;
			cin.get();

			cout <<"You approaches the old man sitting beside  " << endl;
			cout << "Player: Excuse me, wise one. I find myself lost in this treacherous dungeon. Can you offer any guidance?" << endl;
			cin.get();

    		cout <<"Old Man: Ah, a lost soul seeking guidance. I might be able to assist you. But first, answer me this: Will you face the challenges ahead with courage or caution?" << endl;

    		cout <<"(Choose an answer: courage or caution)"<< endl;
    		cout << ">> ";
    		cin >> option;
    		cout << endl;
    		if (option == "courage" || option == "Courage"){
        		cout <<"Old Man: Ah, a player of courage. An intriguing choice, indeed. Remember, your decisions shape your destiny within these dark depths.";
        		cin.get();
    		}

    		else if(option == "caution" || option == "Caution"){
        		cout <<"Old Man: Ah, a player of caution. An intriguing choice, indeed. Remember, your decisions shape your destiny within these dark depths.";
        		cin.get();
   			}

    		else{
						cout << "Wow, outstanding answer." << endl;
						cin.get();

        		cout << "Whatever that means. Remember, your decisions shape your destiny within these dark depths.";
        		cin.get();
    		}
    		cin.get();

    		cout <<"Old Man: Now, let us test your wit. First question: how many fingers do I have?"<< endl;
    		cout << ">> ";
    		cin >> option;
			cout << endl;
    		if(option == "three" || option == "3"){
       		}

   			else{
        		while (option != "three" ){
            		cout << "Wrong!!" << endl;
            		cout << "TRY AGAIN!!"<< endl;
            		cout << ">> ";
            		cin >> option;
            		cout << endl;

            		if(option == "three" || option == "3")
                		break;
        		}
    		}

    		cout << "Impressive! Your knowledge shines like a beacon in this gloomy dungeon.";
    		cin.ignore();
    		cin.get();
			cout << "May your path be guided by such brilliance. Go forth, brave adventurer, and claim your victory."<< endl;
			cin.get();
    		cout << "You received the Soul Stone!"<< endl;
    		cin.get();
    		weapon.appendWeapon("Soul Stone");
    		break;

        case 4:
        	cout << "---------------------------------" << endl;
 			cout << "            Chapter 4" << endl;
 			cout << "---------------------------------" << endl;
			cout << "After a dazzling moment,you saw a familiar environment." << endl;
			cin.get();

			cout << "Its your home." << endl;
			cin.get();

			cout << "You thought it was the power of Soul Stone.Transferring you back to the reality." << endl;
			cout << "You so grateful and hug your family." << endl;
			cin.get();

			cout << "Suddenly,you saw a unexpected member." << endl;
			cin.get();

			cout << "That's your grandfather that passed away few months ago." << endl;
			cin.get();

			cout << "Soul Stone : Thats the power of mine , revive a soul that you mind much." << endl;
			cin.get();

			cout << "Later in the days,you living your life as usual.";
			cin.get();

			cout << "However,in this period,you felt something wrong." << endl;
			cin.get();

			cout << "Everything seems goes so well for you." << endl;
			cin.get();

			cout << "Getting new girlfriend,getting promotion collagues you hated most get fired....";
			cin.get();

			cout << "Everything seem seem so fake ,like a dream." << endl;
			cin.get();

			cout << "Suddenly you reach the mystery stones from your pocket.";
			cin.get();
			cout << "You realized that if the game is over,these stones should not be existing anymore." << endl;
			cin.get();

			cout << "All of a sudden,the world collapsed and an evil knight had appeared." << endl;
			cin.get();

			cout << "Mystery Knight : Why you want to get out this dream. Everything goes on on your will." << endl;
			cin.get();

			cout << "Mystery Knight : If I were you,I will stay in this dream world.I can fullfill any of your wish." << endl;
			cin.get();

			cout << "How will you do your decision? " << endl;
			cout << "Enter 'Stay' or 'Leave': " << endl;
    		cout << ">> ";
			cin>> option;

			cout << endl;
			while (option != "Stay" && option != "stay" && option != "Leave" && option != "leave")
			{
				cout << endl;
				cout << "Invalid input, only enter 'Stay' or 'Leave'." << endl;
				cout << ">> ";
				cin >> option;
			}

			if(option == "Stay" || option == "stay"){
				cout << "Soul Stone : How about your relatives in reality." << endl;
				cin.get();

				cout << "They won't be able to enjoy what you have enjoyed here."<< endl;
				cin.get();

				cout << "They will lost you forever in the reality world." << endl;
				cin.get();

				cout << "Do you remember the purpose you get in here at first?" << endl;
				cin.get();

				cout << "The Mystery Knight seen your determination getting shift." << endl;
				cin.get();

				cout << "He decided to call upon his dragon to launch attack to you first." << endl;
				cin.get();
			}

			else{
				cout << "I won't stay!I rather united with my friend in reality." << endl;
				cin.get();

				cout << "The Mystery Knight seen your determination getting shift." << endl;
				cin.get();

				cout << "He decided to call upon his dragon to launch attack to you first." << endl;
				cin.get();
			}


			cout << endl;
			bossRoomList();

			cout << "A red Reality Stone fell out on the ground the dragon died." << endl;
			cin.get();

			cout << "You picked up the red Reality Stone." << endl;
			cin.get();
			weapon.appendWeapon("Reality Stone");

			cout << "'Out of my expectation, you are capable enough to kill the dragon', the Mystery Knight said.";
			cin.get();
			cout << "'See you when I see you later', a mysterious murmur from the Mystery Knight before he went off." << endl;
			cin.get();

			cout << "You don't know what you are going to encounter." << endl;
			cin.get();

			cout << "But there is a feeling getting closer to your family,closer to the reality world." << endl;
			cin.get();

			cout << "The red light enveloped you, casting an enchanting aura as you found yourself transported to a place you had never laid eyes upon before. " << endl;
			cin.get();

			break;

        case 5:

    		char z = 'z';
    		cout << "---------------------------------" << endl;
 			cout << "          Final Chapter " << endl;
 			cout << "---------------------------------" << endl;
    		cin.get();

    		cout << "A sound from nowhere : 'Hi there.I didn't expect you reach here.'" << endl;
			cin.get();

			cout << "I have a present for you.But it depends on your ability to obtain it." << endl;
			cin.get();

    		cout << "You notice a box that is half burried in a wall."<< endl;
    		cin.get();


    		cout << "You attempt to pull out the box from the wall."<< endl;
    		cout << "Keep entering z to pull the box!!" << endl;

   			for(int i=1; i<=10; i++){
       		 	cin.get(z) >> z;
        		while(z!='z'){
            		cout << "only press z";
            		cin.get(z);

        		}

        		cout << i << "0%" << endl;
        		if (i==5){
            		cout << "halfway there!"<<endl;
        		}
    		}

    		cout << "You did it..." << endl;
    		cin.get();
    		cout << "You open the box....." << endl;
    		cin.get();
    		cout << "You see a shinny purple stone inside the box!(You pick it up)" << endl;
    		cin.get();

    		weapon.appendWeapon("Power Stone");

			cout << "A sound from nowhere : I think you have 5 stones with you,isn't." << endl;
    		cin.get();
			cout << "Do you know what these stones for and what is their function?" << endl;
			cout << "Enter 'Yes' or 'No': " << endl;
    		cout << ">> ";
    		cin >> option;

			while(option != "yes" && option != "Yes" && option != "no" && option != "No")
			{
				cout << endl;
				cout << "Invalid input, only enter 'Yes' or 'No'." << endl;
				cout << ">> ";
				cin >> option;
			}

			if(option == "yes" || option == "Yes")
			{
				cout << endl;
				cout << "Seem like you get familiar with the stones and their ability during your adventure." << endl;
				cin.get();

				cout << "It's time for you to be the next warrior." << endl;
				cin.get();

			}

			else
			{
				cout << endl;
				weapon.stoneHistory();

				cout << "It's time for you to be the next warrior as the disappear of Mind Stone had released the dragon." << endl;
				cin.get();

			}

    		bossRoomList();

			system("cls");
			cout << "'I didn't expect you to have such great battle skills,' the Mystery Knight remarks." << endl;
			cin.get();
			cout << "'Walk straight up the stairs, and you will find the way out to return to where you belong,' the Mystery Knight says with his final breath." << endl;
			cin.get();
			cout << "'Thank you, and it was nice to meet you too,' you say graciously as you ascend the stairs." << endl;
			cin.get();
			cout << "The light grows increasingly radiant as you get nearer to the exit." << endl;
			cin.get();
			cout << "As you breathe in the familiar air, you realize that you have finally returned to your rightful place." << endl;
			cin.get();
			cout << "'What just occurred feels like a dream', you express with a heartfelt smile." << endl;
			cin.get();

			if(weapon.searchWeapon("rose")) //Hidden Storyline appears if player chose to picked up the rose previously
			{
				cout << endl << endl;
				cout << "-------------------------------------------------------------------------" << endl;
				cout << "      Hidden Storyline (You have picked up the rose in the dark room)" << endl;
				cout << "-------------------------------------------------------------------------" << endl << endl;
				cout << "As you reflect on your journey, you notice a beautiful rose drops out from your pocket.(You have picked up in the dark room)";
				cin.get();
				cout << "It reminds you of your wife, who passed away long ago. ";
				cin.get();
				cout << "Holding the rose, memories of her love and warmth flood your heart." << endl;
				cin.get();

				cout << "You come across a peaceful grave, the resting place of your beloved wife." << endl;
				cout << "With tears in your eyes, you place the rose gently in front of her grave." << endl;
				cin.get();
				cout << "The words 'Lovely Wife' engraved on the tombstone fill you with both sorrow and gratitude." << endl;
				cin.get();

				cout << "As you say your final farewell, you feel a renewed sense of purpose.";
				cin.get();
				cout << "The memory of your wife will always be with you, guiding your future adventures." << endl;
				cin.get();

				cout << "Leaving the grave behind, you carry the love and strength you found on your journey.";
				cin.get();
				cout << "With determination in your heart, you step forward into the unknown, embracing the future while cherishing the love that will forever remain in your soul." << endl;
				cin.get();
			}

			cout << endl << endl;
    		cout << " ______ __  __  ____     ____ __  __ ____  " << endl;
    		cout << " | || | ||  || ||       ||    |\\ || || \\ " << endl;
    		cout << "   ||   ||==|| ||==     ||==  ||\\|| ||  ))" << endl;
    		cout << "   ||   ||  || ||___    ||___ || \\| ||_// " << endl;

    	   	cout << endl;
    	   	countLevel = 1;
			storyNum = 0;
    		break;
	}

		storyNum++;
}

void Room::bossRoomList()
{

	string option; //Enter choice of weapon
	string action; //for attack
	int choice; //choices

	if(countLevel == 1)
	{
		//displayBossFigure();
		bossRoomAction();
	}


		else if(countLevel == 2)
		{

			//displayBossFigure();
			bossRoomAction();
		}

		else if(countLevel == 3)
		{
			system("cls");
    		cout << "Suddenly...";
    		cin.get();

    		cout << "The ground trembles^v^v^v^";
    		cin.get();

    		cout << endl;
    		cout << "There appears to be 5 pillars that emerge alongside the platform.";
    		cin.get();

    		cout << "It appears that all 5 pillars has a slot to put the infinity stone inside";
    		cout << "Choose which infinity stone to go first"<< endl;
    		cout << "1.Power Stone\n2.Soul Stone\n3.Time Stone\n4.Space Stone\n5.Reality Stone\n"<< endl;

    		int y = 1;
    		string option;


    		while(y <= 5){
    			cout << "Enter the name of the pillar you wish to insert the infinity stone" << endl;
    			cout << ">> ";
        		getline(cin,option);
        		cout << endl;

        		while(!weapon.searchWeapon(option)) //check whether the weapon entered is in the list
				{
					cout << option << " is NOT found in your inventory!" << endl;
					cout << "Choose the infinity stone(s) which is available in your inventory:" << endl;
					cout << ">> ";
					getline(cin,option);
					cout << endl;
				}



            	if(option == "Power Stone")
				{
					cout << "You inserted the Power Stone into the Power Pillar!"<< endl;
					cout << y << " pillar(s) has/have been activated!" <<endl << endl;
            		weapon.deleteWeapon(option); //Delete the infinity stone you have inserted
                }
                else if(option == "Soul Stone")
				{
					cout << "You inserted the Soul Stone into the Soul Pillar!"<< endl;
					cout << y << " pillar(s) has/have been activated!" <<endl << endl;
            		weapon.deleteWeapon(option); //Delete the infinity stone you have inserted
                }
                else if(option == "Time Stone")
				{
					cout << "You inserted the Time Stone into the Time Pillar!"<< endl;
					cout << y << " pillar(s) has/have been activated!" <<endl << endl;
            		weapon.deleteWeapon(option); //Delete the infinity stone you have inserted
                }
                else if(option == "Space Stone")
				{
					cout << "You inserted the Space Stone into the Space Pillar!"<< endl;
					cout << y << " pillar(s) has/have been activated!" <<endl << endl;
            		weapon.deleteWeapon(option); //Delete the infinity stone you have inserted
                }
                else if(option == "Reality Stone")
				{
					cout << "You inserted the Reality Stone into the Reality Pillar!"<< endl;
					cout << y << " pillar(s) has/have been activated!" <<endl << endl;
            		weapon.deleteWeapon(option); //Delete the infinity stone you have inserted
                }

				else
                {
					cout << "No such pillars!" << endl << endl;
					continue;
                }
                  y++;
        		}


    		cout << endl;
    		cout << "You have inserted all five stones!" << endl;
    		cin.get();
    		cout << "Boooommm! Suddenly something has come to your sight!" << endl;
    		cin.get();
    		weapon.actionWeapons("Sword of Zenith");
    		cout << endl;
    		cout << "The legendary Sword of Zenith has appeared!"<< endl;
    		cin.get();
    		cout << "Pick up Sword of Zenith? (yes/no)" << endl;
    		cout << ">> ";
    		cin >> option;

			while(option != "yes" && option != "Yes" && option != "no" && option != "No")
			{
				cout << endl;
				cout << "Invalid input, only enter yes or no." << endl;
				cout << ">> ";
				cin >> option;
			}

    		if (option== "yes" || option=="Yes"){
	          	cout << "You picked up the Sword of Zenith" << endl;
	          	weapon.appendWeapon("Sword of Zenith");
	          	cout << endl;
	          	cin.get();
	          	cin.get();
			}

    		else if (option== "No"|| option=="no"){
        		cout <<" You decided not to picked up the best weapon in the game"<< endl;
        		cout << endl;
        		cin.get();
        		cin.get();
    		}

			cout << "The Mystery Knight suddenly appears, his voice resonating with an air of surprise." << endl;
			cin.get();
			cout << "'I didn't expect to encounter you so soon', he remarks." << endl;
			cin.get();
			cout << "Thousand of thoughts come across your mind." << endl;
			cout << "You realize that a battle between you and him is inevitable" << endl;
			cin.get();

			cout << "Show me your determination and courage!' he challenges." << endl;
			cin.get();
			cout << "You prepare to face the Mystery Knight and prove your worth." << endl << endl;
			cin.get();
    		displayBossFigure();
    		cout << "Edeth the dragon emerge from the platform!!";
    		cin.get();
    		cout << "ROAAAAAAAAAAAAARRRRRRRRR" << endl;
    		cin.get();
    		bossRoomAction();
	}


}

void Room::displayBossFigure()
{
	if(countLevel == 1)
	{
		cout << "----------------------------------------" << endl;
		cout << "You have entered level 1 Boss Room!!" << endl;
		cout << "----------------------------------------" << endl << endl;

		cout << "                _ ___                /^^\\ /^\\  /^^\\_" << endl;
		cout << "    _          _@)@) \\            ,,/ '` ~ `'~~ ', `\\." << endl;
		cout << "  _/o\\ _ _ _/~`.`...'~\\       ./~~..,'`','',.,' '  ~:" << endl;
		cout << " / `,'.~,~.~  .   , . , ~|,   ,/ .,' , ,. .. ,,.   `,  ~\\" << endl;
		cout << "( ' _' _ '_` _  '  .    , ` }_/ .' ..' '  `  `   `..  `,   \\" << endl;
		cout << " ~V~ V~ V~ V~ ~\\ `   ' .  '    , ' .,.,''`.,.''`.,.``. ',   \\" << endl;
		cout << "  _/\\ /\\ /\\ /\\ , . ' ,   `_/~\\ .' .,. ,, , _/~\\ `. `. '.,  \\" << endl;
		cout << " < ~ ~ '~`'~'`, .,  .   `_: ::: \\ '      `_/ ::: \\ `.,' . ',  \\" << endl;
		cout << " \\ ' `_  '`_    _    ',/ _::_::_ \\ _    _/ _::_::_ \\  `.,'.,`., \\ -,-,-,_,_," << endl;
		cout << "   `'~~ `'~~ `'~~ `'~~ \\ (_)(_)(_)/  `~~'\\ (_)(_)(_)/ ~'`\\ .._,._,'_;_;_;_;_;" << endl;
		cout << endl << endl;
	}

	else if(countLevel == 2)
	{
			cout << "----------------------------------------" << endl;
			cout << "You have entered level 2 Boss Room!!" << endl;
			cout << "----------------------------------------" << endl << endl;

			cout << "          /                            )" << endl;
			cout << "          (                             |}o "<< endl;
			cout << "         /|                              }} " << endl;
			cout << "        //                                }}" << endl;
			cout << "       ///                                 }}o" << endl;
			cout << "      /(                                    )  " << endl;
			cout << "      }}  }_                               //)" << endl;
			cout << "       }}  :}__                           ///" << endl;
			cout << "        }}     )                         //  _"<< endl;
			cout << "         }}:  /                         //  /" << endl;
			cout << "          }} / }                       //   _" << endl;
			cout << "           /)   }   ___..-'           (|   _|" << endl;
			cout << "          //     /   _.'              } }   |" << endl;
			cout << "         /|       } }________          } | /" << endl;
			cout << "        (| _ _  __/          '-.       ) /.'" << endl;
			cout << "         \\ .  '-.__            }_    / /  _" << endl;
			cout << "          \\'.     > --. '.     }  / / /" << endl;
			cout << "           \\ \\      \\     }  }     .' }.'" << endl;
			cout << "            \\ \\  '._ }     } )    / .' |" << endl;
			cout << "             \\ \\     }_   |    .'_/ __/" << endl;
			cout << "              \\  \\      }_ |   / /  _/  _" << endl;
			cout << "               \\  \\       / _.' /  /      ." << endl;
			cout << "               \\   |     /.'   / .'       '-,_" << endl;
			cout << "                \\   \\  .'   _.'_/            |  _" << endl;
			cout << "   /}   /}      ) ___(    /_.'           \\    |" << endl;
			cout << "  | _}__// |    (.'      _/               |    |" << endl;
			cout << "  }/_  __  /--'`    ,                   __/    /" << endl;
			cout << "  (_ ) /b)  }  '.   :             ___.-'_/  __/" << endl;
			cout << "  /:/:  ,     ) :        (      /.'__/-'| _ /" << endl;
			cout << " /:/: __}_ >  __,_.----.__\\   /        (/(/(/" << endl;
			cout << "(_(,_}V .'}--'    _/  __| |   /" << endl;
			cout << " VvvV  }}`    _.-' _.'     |   |." << endl;
			cout << "   n_n}}     (((|->|        |   /" << endl;
			cout << "   '--'         ~='          |  |" << endl;
			cout << "                              | |_,,," << endl;
			cout << "                              |    /o " << endl;
			cout << "                               '.__)" << endl;
			cout << endl << endl;
	}

	else if(countLevel == 3)
	{
			cout << "----------------------------------------" << endl;
			cout << "You have entered level 3 Boss Room!!" << endl;
			cout << "----------------------------------------" << endl << endl;

			cout << "                            ==(W{==========-      /===-                        " << endl;
			cout << "                              ||  (.--.)         /===-_---~~~~~~~~~------____  " << endl;
			cout << "                             | \\ ,|**|,__      |===-~___                _,-' `" << endl;
			cout << "                 -==\\        `/ ' `--'   ),    `//~\\   ~~~~`---.___.-~~      " << endl;
			cout << "             ______-==|        /` _. .__/\\     | |  \\           _-~`         " << endl;
			cout << "       __--~~~  ,-/-==\\      (   | .  |~~~~|   | |   \\        ,'             " << endl;
			cout << "    _-~       /'    |  \\     )__/==0==-\\ >/   / /     \\      /               " << endl;
			cout << "  .'        /       |   \\      /~\\ __/~~///  /' /       \\   /'                " << endl;
			cout << " /  ____  /         |    \\.__/-~~  \\  |_/'  /         \\/'                  " << endl;
			cout << "/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`                   " << endl;
			cout << "                  \\|      /        _) | ;  ),   __--~~                        " << endl;
			cout << "                    '~~--_/      _-~/- |/\\   '-~ \\                            " << endl;
			cout << "                  {\\ _--_/}    / \\_>-|)<__\\      \\                           " << endl;
			cout << "                   /'   (_/  _-~  | |__>--<__|      |                          " << endl;
			cout << "                  |   _/) )-~     | |__>--<__|      |                          " << endl;
			cout << "                  / /~ ,_/       / /__>---<__/      |                          " << endl;
			cout << "                 o-o _//        /-~_>---<__-~      /                           " << endl;
			cout << "                 (^(~          /~_>---<__-      _-~                            " << endl;
			cout << "                ,/|           /__>--<__/     _-~                               " << endl;
			cout << "             ,//('(          |__>--<__|     /                  .----_          " << endl;
			cout << "            ( ( '))          |__>--<__|    |                 /' _---_~\\        " << endl;
			cout << "         `-)) )) (           |__>--<__|    |               /'  /     ~\\      " << endl;
			cout << "        ,/,'//( (            \\ _>--<_\\   \\            /'  //        ||      " << endl;
			cout << "      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'       " << endl;
			cout << "    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/                  " << endl;
			cout << "  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~                    " << endl;
			cout << "   ;'( ')/ ,)(                              ~~~~~~~~~~                         " << endl;
			cout << "  ' ') '( (/                                                                   " << endl;
			cout << "    '   '  `" << endl;
			cout << endl << endl;
	}
}


void Room::bossRoomAction()
{
		string action = " ";
		string option = " ";

		while(!health.playerIsDead() && !health.bossIsDead())
		{
			system("cls");
			displayBossFigure();
			health.healthStatus();
			cout << endl;
			cout << "Use your weapon to attack the dragon!" << endl;
			weapon.displayWeapons();
			cout << "Which weapon you want to use: "  << endl;
			cout << ">> ";
			getline(cin,action);

			while(!weapon.searchWeapon(action)) //check whether the weapon entered is in the list
			{
				cout << endl;
				cout << action << " is NOT found in your weapon list!" << endl;
				cout << "Choose a weapon available in your weapon list:" << endl;
				cout << ">> ";
				getline(cin,action);
			}

			weapon.actionWeapons(action);

			cout << "----------------------------------------------" << endl;
			cout << "        You have launched the attack!"     << endl;
			cout << "----------------------------------------------" << endl;
			health.probabilityAction(action, countLevel, 1);

			cout << endl;
			if(health.playerIsDead() || health.bossIsDead())
				break;

			cout << "----------------------------------------------" << endl;
			cout << "        Boss has launched the attack!" << endl;
			cout << "----------------------------------------------" << endl;
			health.probabilityAction(action, countLevel, 2);

			if(health.playerIsDead() || health.bossIsDead())
				break;

		}

		if(health.playerIsDead())
		{
			cout << "You are DEAD!" << endl;
			cout << "Do you wish to try again? (yes/no)" << endl;
			cout << ">> ";
			cin >> option;
			cout << endl;

			while(option != "yes" && option != "Yes" && option != "no" && option != "No")
			{
				cout << endl;
				cout << "Invalid input, only enter yes or no." << endl;
				cout << ">> ";
				cin >> option;
			}

			cout << endl;
			if(option == "yes" || option == "Yes") //reset to initialial value before stage 5
			{
				if(weapon.searchWeapon("Sword of Zenith"))
    				weapon.deleteWeapon("Sword of Zenith");

    			if(countLevel == 3)
    			{
    				weapon.appendWeapon("Power Stone");
    				weapon.appendWeapon("Soul Stone");
    				weapon.appendWeapon("Time Stone");
    				weapon.appendWeapon("Reality Stone");
    				weapon.appendWeapon("Space Stone");
				}
				cout << "Best of Luck!" << endl;
				health.healthReset();
				cin.get();
				system("cls");
				bossRoomList();
			}
			else
				cout << "Try again next time!" << endl;
		}

		else if(health.bossIsDead())
		{
			cout << endl;
			cout << "Excellent! You have killed the boss!" << endl;
			cout << "-----------------------------------------" << endl;
			health.healthReset();
			countLevel++;  //increment the boss level after defeated the current boss, very IMPORTANT!
			cin.get();
		}
}

void Room::saveProgress()
	{
		int currentStage = storyNum;
		string currentWeapons[20] = {"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0"};

        ofstream outFile;
		outFile.open("PlayerData.txt"); // Open the file in append mode

			outFile << currentStage;
			outFile << "\n";
			weapon.saveWeapons(currentWeapons);

			for(int i = 0; i < 10;i++)
			{	if(currentWeapons[i] != "0")
				{
					outFile << currentWeapons[i];
					outFile << "\n";
				}
			}
            outFile.close();
            cout << "Progress saved successfully!" << endl;


    }

void Room::resumeProgress(int prevStage, string prevWeapons[], int weaponSize)
{
	storyNum = prevStage;

	if(prevStage <= 4)
		countLevel = 2;

	else if(prevStage == 5)
		countLevel = 3;

	for(int i = 0; i < weaponSize; i++)
	{
		if(prevWeapons[i] != "0")
			weapon.appendWeapon(prevWeapons[i]);

	}
}

void Room::loadProgress(int &stage, string weapons[], int weaponSize)
{
		int temp = 0;
		string savedWeapon;
        ifstream inFile;
		inFile.open("PlayerData.txt");

         if (inFile)
		 {
				inFile >> temp;
			    stage = temp;

			        int i = 0;
			        getline(inFile, savedWeapon);
			        {
				        while (getline(inFile, savedWeapon))
		               	{
								weapons[i] = savedWeapon;
				                i++;
				          }

			    	}


	      		cout << endl;
	      		cout << "Current Stage: " << stage << endl;
	      		cout << "The weapon(s) and item(s) available: " << endl;
	      		for(int i = 0; i < weaponSize; i++)
					{
						if(weapons[i] != "0")
							cout << weapons[i] << endl;

					}

			inFile.close();
			cout << endl;
            cout << "Progress loaded successfully!" << endl;
            resumeProgress(stage, weapons, weaponSize); //call resumeProgress function to resume the previous saved progress
    	}
		else {
            cout << "Unable to open the file." << endl;
        }
}


//Similar to loadProgress function, but does not call resumeProgress function as it just display player previous saved info
void Room::showSavedProgress(int &stage, string weapons[], int weaponSize)
{
		int temp = 0;
		string savedWeapon;
        ifstream inFile;
		inFile.open("PlayerData.txt");

         if (inFile)
		 {
				inFile >> temp;
			    stage = temp;

			        int i = 0;
			        getline(inFile, savedWeapon);
			        {
				        while (getline(inFile, savedWeapon))
		               	{
								weapons[i] = savedWeapon;
				                i++;
				          }

			    	}


	      		cout << endl;
	      		cout << "Current Stage: " << stage << endl;
	      		cout << "The weapon(s) and item(s) available: " << endl;
	      		for(int i = 0; i < weaponSize; i++)
					{
						if(weapons[i] != "0")
							cout << weapons[i] << endl;

					}

			inFile.close();
			cout << endl;
            cout << "Progress loaded successfully!" << endl;
    	}
		else {
            cout << "Unable to open the file." << endl;
        }
}
