# Hackathon2-Group-50-

## Game Description
"Welcome to 'Infinity Conquest: Rise of the Stones,' an epic text-based adventure where you embark on a thrilling journey to collect the legendary Infinity Stones and engage in fierce battles with mighty bosses that threaten the very fabric of existence.

As the chosen hero, you find yourself at the center of a gripping storyline, filled with danger and discovery. The fate of the universe hangs in the balance as you set out on a quest to harness the unimaginable power of the Infinity Stones.

Prepare yourself for heart-pounding boss battles where strategy and skill are key. Encounter colossal creatures, each possessing unique abilities and formidable strength. To overcome these formidable foes, you'll have an arsenal of weapons at your disposal, ranging from enchanted sword to mystical magic staff.

Engage in intense turn-based combat as you face off against these legendary bosses. The battle unfolds in a thrilling back-and-forth exchange of attacks, where every move counts. Choose your actions wisely, as both you and the boss have the chance to dodge incoming assaults, showcasing your agility and reflexes. And when the opportunity arises, unleash devastating critical hits, unleashing a torrent of power upon your adversary and dealing double the damage.

Your journey will test your courage, wit, and strategic thinking. As you progress, uncover the hidden secrets of the Infinity Stones and unlock their true potential. The fate of the cosmos rests in your hands.

Are you ready to embark on this epic adventure? Brace yourself for the ultimate test of skill, as you strive to become the true master of the Infinity Stones!"

## Game Features
- Single player gameplay, providing an immersive and personal gaming experience.
- Immersive storytelling that keeps player engaged throughout their quest for the Mystic Stones.
- Engaging storyline divided into 5 chapters, each centered around collecting Mystic Stones and discovering interesting items.
- Save and load function to resume gameplay at any chapter and keep track of progress.
- Progressive difficulty, intense boss battles against 3 powerful adversaries who becoming more powerful and dealing higher damage as the story unfolds.
- Wide selection of weapons, each with different damage capabilities, offering strategic choices for players.
- Battle system based on probability, where outcomes such as dodging, normal hits, and critical hits are determined by chance.
- Turn-based combat where the player and the boss take alternating turns to attack.
- Chance for both the player and the boss to
  - Land normal hits, inflicting a predetermined amount of damage on their opponent.
  - Dodge incoming attacks, effectively preventing them from receiving damage from their opponent.
  - Strikecritical hits, where both the player and the boss can deliver powerful strikes that deal double the damage to their opponent.
  - This battle system adds an element of unpredictability and strategy to the battles, as the outcomes of dodging, critical hits, and normal hits are determined by chance.
  - The chances are as follows: 20% for dodging, 60% for normal hits, and 20% for critical hits.

## How to Play
- The game is in text based, meaning that the player will input keywords into the panel.
- Once enter the game, the user can press enter to allow the story to continue.
- When a decision is awaiting the player's response, the player can type in the keyword to progress with the story.
-player have the choice to enter (yes/no) or (1,2,3) depending on the situation. 
-Battle mode:
	-Both player and the enemy has their respective health and the objective of the player is to kill the enemy's health down to 0.
	-At the player's turn, the player can choose any of their weapon to deal damage to the enemy by typing out the weapon that is displayed out.
	-If the player hp has been down to 0, the game is over, and will return back to the save state, which is the start of the chapter the game is over at.


## Object-Oriented Concepts
In our game, a few classes were used to organise the object used inside the game. Our game is divided into 4 classes, health, room, weapon and game.
-The game class is the main menu of the game. Everytime the player decide to stop playing in between chapters, the main menu will be shown again.
-The game class has the main page function, and start function to initialize the game.
-The health class is the health aspect of both player and enemy during battle mode.
-bosstakedamage() is where the player used a weapon on the boss, and will display health decrease information.
-playertakedamage is also the same, where player take damage from the boss. 
-Weaponlist class is the linked 


## Data Structures (Linked Lists)
The most important concept of the game is the usage of linked list, which is weaponlist that is derieved from linked list in the game. 
	-The inventory uses linked list. Everytime the player picks up an item, that is either stone or weapon, it will append into the linked list.
	-When the player are allowed to choose the weapon from their inventory, the system will display out the list of weapon before the player can choose.
	- searchweapon is used for when the player choose the weapon to use at the enemy, it will search weapon from the list to make sure the weapon is inside the inventory, so that it can be used onto the enemy.
	- Item will be deleted from the inventory, hence the deletenode function is used here.

## Screenshots
Include screenshots or images showcasing the visuals and gameplay of your game.

## Game Demo Video
Provide a link to a video demonstrating the gameplay of your game. You can upload the video to platforms like YouTube or Vimeo.

## Source Code
Provide a link to your source code files, preferably in a public GitHub repository. Make sure to include only the relevant .h and .cpp files, excluding any project-specific files from your IDE.
