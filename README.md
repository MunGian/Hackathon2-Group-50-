# CPT113 Hackathon2-Group 50-

## Game Description
"Welcome to 'Infinity Conquest: Rise of the Stones,' an epic text-based adventure where you embark on a thrilling journey to collect the legendary Mystic Stones and engage in fierce battles with mighty bosses that threaten the very fabric of existence.

As the chosen hero, you find yourself at the center of a gripping storyline, filled with danger and discovery. The fate of the universe hangs in the balance as you set out on a quest to harness the unimaginable power of the Infinity Stones.

Prepare yourself for heart-pounding boss battles where strategy and skill are key. Encounter colossal creatures, each possessing unique abilities and formidable strength. To overcome these formidable foes, you'll have an arsenal of weapons at your disposal, ranging from enchanted sword to mystical magic staff.

Engage in intense turn-based combat as you face off against these legendary bosses. The battle unfolds in a thrilling back-and-forth exchange of attacks, where every move counts. Choose your actions wisely, as both you and the boss have the chance to dodge incoming assaults, showcasing your agility and reflexes. And when the opportunity arises, unleash devastating critical hits, unleashing a torrent of power upon your adversary and dealing double the damage.

Your journey will test your courage, wit, and strategic thinking. As you progress, uncover the hidden secrets of the Mystic Stones and unlock their true potential. The fate of the cosmos rests in your hands!"

## Game Features
- Single player gameplay, providing an immersive and personal gaming experience.
- Immersive storytelling that keeps player engaged throughout their quest for the Mystic Stones.
- Engaging storyline divided into 5 chapters, each centered around collecting Mystic Stones and discovering interesting items.
- Save and load function to resume gameplay at any chapter and keep track of progress.
- Progressive difficulty, intense boss battles against 3 powerful adversaries who becoming more powerful and dealing higher damage as the story unfolds.
- Wide selection of weapons, each with different damage capabilities, offering strategic choices for players.
- Battle system incorporates
  	- A health system, which tracks the health of both the player and the boss during the battle.
	- Simple graphic animations for the boss and weapon effects.
	- Probability, where outcomes such as dodging, normal hits, and critical hits are determined by chance.
  	- Turn-based combat where the player and the boss take alternating turns to attack.
- Chance for both the player and the boss to
  - Land normal hits, inflicting a predetermined amount of damage on their opponent.
  - Dodge incoming attacks, effectively preventing them from receiving damage from their opponent.
  - Strike critical hits, where both the player and the boss can deliver powerful strikes that deal double the damage to their opponent.
  - This battle system adds an element of unpredictability and strategy to the battles, as the outcomes of dodging, critical hits, and normal hits are determined by chance.
  - The chances are as follows: 20% for dodging, 60% for normal hits, and 20% for critical hits.
- Different actions and choices can lead to various storylines and outcomes.
	- Additionally, performing specific actions within the storyline may unveil hidden storylines.

## How to Play
- The game is in text based, meaning that the player will input keywords into the panel.
- Once enter the game, the user can press enter to allow the story to continue.
- When a decision is awaiting the player's response, the player can type in the keyword to progress with the story.
- Player have the choice to enter (yes/no) or (1,2,3) depending on the situation. 
- Battle mode:
	- Both player and the enemy has their respective health and the objective of the player is to kill the enemy's health down to 0.
	- At the player's turn, the player can choose any of their weapon to deal damage to the enemy by typing out the weapon that is displayed out.
	- If the player hp has been down to 0, the game is over, and will return back to the save state, which is the start of the chapter the game is over at.


## Object-Oriented Concepts
In our game, a few classes were used to organise the object used inside the game. Our game is divided into 4 Classes, namely WeaponList, Room, Health and Game.
1. Classes:
	- WeaponList: Represents a linked list of weapons.
	- Room: Represents a room in the game, managing the game progress and interactions.
	- Health: Represents the health status of the player and the boss.
	- Game: Represents the main game class, coordinating different game components.
2. Objects:
	- WeaponList Object:
		- Responsibilities:
			- Managing a linked list of weapons and items obtained in the storyline.
			- Appending new weapons and items.
			- Deleting weapons and items when they are used in certain scenarios.
			- Searching for specific weapons.
			- Displaying the available weapons during battle.
			- Performing actions related to the weapons, such as displaying graphic animations for their effects.
			- Saving and loading the list of weapons.
			- Providing a simple story about the stones in the storyline.
		- Collaboration:
			- It collaborates with other objects, such as the Room object, to facilitate gameplay and progression.
	- Room Object:
		- Responsibilities:
			- Managing the progression and storylines in the game.
			- Keeping track of the current boss level and storyline number.
			- Holding instances of the WeaponList and Health objects.
			- Displaying graphic animations for the boss figure.
			- Handling the turn-based battle system where the player and boss take alternating turns to attack.
			- Saving and loading the game progress.
			- Resuming the game progress based on previous saved data.
			- Displaying information about the player's saved progress.
		- Collaboration:
			- It collaborates with the WeaponList and Health objects to manage weapons, health, and battle interactions.
	- Health Object:

		- Responsibilities:
			- Managing the health status of the boss and the player.
			- Handling damage calculations when the player deals damage to the boss and vice versa.
			- Displaying the current health status of both the player and the boss during battle.
			- Generating probabilities for actions such as dodge, normal hit, and critical hit for both the player and the boss.
			- Determining if the player or the boss has been defeated.
			- Resetting the health values if the player decides to attempt the boss again after losing.
		- Collaboration:
			- It collaborates with the Room object to manage health-related aspects of the battle system.
	- Game Object:

		- Responsibilities:
			- Managing the overall game flow.
			- Displaying the main page and introduction.
			- Handling player choices and actions.
			- Initiating the storyline and entering rooms.
			- Providing game details and instructions.
			- Managing the save and quit functionality.
		- Collaboration:
			- It collaborates with the Room object and other components to control the game progression and user interactions.
     
3. Encapsulation:
	-  No public member variable is declared, the data is encapsulated within a class and cannot be accessed or modified directly from outside the class. This enforces the concept of data hiding and prevent from unintentionally modifying the data.
	 - Instead, we declare private members variables, they are only accessible within the class, preventing direct manipulation from external code. This ensures that the data remains encapsulated within the class, and external code can only interact with it through the defined public methods.
	- The public methods within each class, such as appendWeapon(), searchWeapon(), and displayWeapons() in the WeaponList class, encapsulate the operations that can be performed on the class's data. They provide a controlled interface for interacting with the weapons list, ensuring that all operations are performed through the defined methods rather than directly accessing the internal data.

4. Composition:
   	- Game Class:
		- The Game class has a composition relationship with the Room class. It holds an instance of the Room class as a private member variable.
		- This composition allows the Game class to access the functionalities and data of the Room class, such as managing the game's progression, saving and loading progress, and displaying information about the saved progress.
		- By composing the Room class within the Game class, the Game class can delegate responsibilities related to the game's mechanics and progress to the Room class.
   	  
   	- Room Class
		- The Room class contains instances of other classes like WeaponList and Health as private member variables, representing a composition relationship.
   		- The WeaponList composition allows the Room class to append weapons obtained in the storyline and search for specific weapons.
   		- The Health composition enables the Room class to manage health-related operations, such as updating health status and determining probabilities during battles.
   		- Composition promotes code reusability and modularity, as the Room class can utilize the functionalities of the composed classes without direct inheritance.
   		- Composition facilitates the passing of parameters and data between classes will be explained at below.
   	   
	- Some examples of passing parameters between classes in our code:
		- The Game class acts as the central control for the game flow and progress. It can load the previous saved progress from a text file and passes the necessary parameters to resume the game.
			- loadProgress() function in the Room class is called from the Game class, and it receives the loaded progress parameters such as the current stage and saved weapons.     
			- The loadProgress() function in the Room class, in turn, calls the resumeProgress() function, passing the received parameters to further initialize the game's state, including the current stage and the weapons obtained.     
			- The resumeProgress() function in the Room class then passes the loaded weapon details explicitly to the WeaponList class using its member instance(declared as weapon in our code) of the WeaponList class.    
			- This composition and passing of parameters allow the game to seamlessly resume the previous progress by initializing the necessary objects and their data.
     
		 - The composition in the Room class.		
			- appendWeapons(weaponName) function is used to append weapons obtained by the player in the storyline. It utilizes the WeaponList class's appendWeapon function to add the weapon to the list of weapons.
			- searchWeapon(weaponName) function is used to search for a specific weapon in the list of weapons. It utilizes the WeaponList class's searchWeapon function to check if the weapon exists in the list.
			- displayHealthStatus() function is responsible for displaying the current health status of both the player and the boss. It utilizes the Health class's healthStatus function to obtain and display the health values.
			- probabilityAction() function encompasses the logic for performing various battle actions between the player and the boss. It makes use of the Health instance in Room class to handle actions such as attacking, dodging, and calculating damage.

	- Importances of composition and passing parameters between classes in our code:
		- By using composition and passing parameters, the game can load the previous saved progress and resume the game from the desired checkpoint, providing a seamless and uninterrupted gaming experience for the player.
 		- By composing the WeaponList and Health classes within the Room class, we can use the functionalities provided by these classes to enhance the battle system and manage weapons and health effectively during the gameplay.
    	 - This composition-based approach promotes code organization, encapsulation, and reusability in our code.
        
5. Abstraction:
	- Methods like appendWeapon(), deleteWeapon(), and displayWeapons() in WeaponList Class provide abstraction for weapon management.
 	- Methods like roomList(), bossRoomList(), bossRoomAction() in Room Class provide abstraction for storyline progressing.
	- Methods like bossTakeDamage(), playerTakeDamage(), and healthStatus() in Health Class provide abstraction for managing health.
	- Methods like roomList(), bossRoomList(), bossRoomAction() in Room Class provide abstraction for storyline progressing.
	- Methods like MainPage(), EnterRoom(), GameDeails() provide abstaction for initializing and understanding the game.

## Data Structures (Linked Lists)
In our code, we have implemented a linked list data structure to manage the list of weapons in the WeaponList class, which plays a core role in our game. Without it, our program cannot proceed accordingly.

Below is the methods on the implementation of linked list data structure in our code:

- Linked List Structure (similar to basic Linked List, but there is some modifications to suit our game)

	- Within the WeaponList class, we define a private nested structure called WeaponNode, which represents a single node in the linked list. Each node contains a string variable for the weapon name (weapon) and a pointer to the next node (next).

	- The WeaponList class also has a member variable head, which serves as the head (or starting point) of the linked list. This pointer points to the first node in the list.
   
	- Appending Weapons:
		- The appendWeapon() function is used to add weapons to the linked list. When a weapon is appended, a new node is created dynamically, and the weapon name is stored in the node's weapon variable. Then, the new node is then linked to the existing list by updating the next pointer of the last node to point to the new node.
   
	- Delete Used Items or Weapons in some scenarios:
		- The deleteWeapon() function is used to remove a specific weapon or item from the linked list. It allows for the dynamic deletion of weapons that have been used or are no longer needed in certain scenarios.

	- Traversing the List:
		- The displayWeapons() function is used to traverse the linked list and display the weapons. It starts from the head node and iterates through each node by following the next pointers until it reaches the end of the list.

	- Search for Weapon or Item:
		- The searchWeapon() function is used to traverse through the nodes and search for a specific weapon or item. It starts from the head node and iterates through each node using the next pointers until a match is found or the end of the list is reached. This searching mechanism allows the player to check if a desired weapon or item exists in the linked list before performing certain actions.

	- Load Previous Saved Progress:
		- The saveWeapons() function is used in saving the player's previousprogress, including the weapons and items they have obtained. It ensures that the previously saved weapons are loaded and added back into the linked list, allowing the player to continue their gameplay from where they left off. By utilizing the linked list data structure, the saveWeapons function can efficiently rebuild the collection of weapons and items based on the saved data.

## Game Demo Video
Game Demo Video [CPT113 Hackathon 2 Group 50](https://drive.google.com/file/d/1skiNcixn87_Hm97hzH65q1uY2YRLNz4Y/view)

