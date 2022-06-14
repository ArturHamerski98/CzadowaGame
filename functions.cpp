#include <iostream>
#include "functions.h"
#include<string>
#include<algorithm>
#include <windows.h>
using namespace std;

char board[10][10] = {
	{176,176,176,176,176,176,176,176,176,176},
	{176,' ',' ',' ',176,' ',' ',176,' ',176},
	{176,176,176,' ',176,' ',176,176,' ',176},
	{176,' ',' ',' ',176,' ',176,' ',' ',176},
	{176,' ',176,176,176,' ',' ',' ',' ',176},
	{176,' ',' ',' ',176,' ',176,176,' ',176},
	{176,176,176,' ',176,' ',' ',176,' ',176},
	{176,' ',' ',' ',176,176,' ',176,' ',176},
	{176,' ',' ',' ',' ',' ',' ',176,' ',176},
	{176,176,176,176,176,176,176,176,176,176} };
char board2[10][10] = {
	{176,176,176,176,176,176,176,176,176,176},
	{176,' ',' ',' ',176,' ',' ',176,' ',176},
	{176,176,176,' ',176,' ',176,176,' ',176},
	{176,' ',' ',' ',176,' ',176,' ',' ',176},
	{176,' ',176,176,176,' ',' ',' ',' ',176},
	{176,' ',' ',' ',176,' ',176,176,' ',176},
	{176,176,176,' ',176,' ',' ',176,' ',176},
	{176,' ',' ',' ',176,176,' ',176,' ',176},
	{176,' ',' ',' ',' ',' ',' ',176,' ',176},
	{176,176,176,176,176,176,176,176,176,176} };

char boardNotForUser[10][10] = {
   {176,176,176,176,176,176,176,176,176,176},
   {176,' ',' ',' ',176,' ','x',176,'x',176},
   {176,176,176,'x',176,' ',176,176,' ',176},
   {176,' ',' ',' ',176,' ',176,' ',' ',176},
   {176,'x',176,176,176,' ','x',' ',176,176},
   {176,' ',' ','x',176,' ',176,176,' ',176},
   {176,176,176,'x',176,' ',' ',176,' ',176},
   {176,'x',' ',' ',176,176,' ',176,' ',176},
   {176,' ',' ',' ','x',' ',' ',176,'x',176},
   {176,176,176,176,176,176,176,176,176,176} };

int mainMenu() {

    int option;

    cout << "Welcome to our CzadowaGame!\nIf you want to take part in an excellent adventure press 1.\nTo see the help panel press 2.\nDon't leave us but if you have to, press 3.\n";
    while (true) {
        cin >> option;//TODO: sprawdz walidacje podwojnych czarow xd
        cin.clear();
        cin.ignore();
        if ((option == 1) || (option == 2) || (option == 3))
            break;
        else {
            cout << "Invalid input. Try again!" << endl;
        }
    }

    switch (option) {

    case 1:
		startGame();
        break;

    case 2:
		displayHelp();
        break;

    case 3:
        cout << "OK, Bye! See you next time!\n";
        break;

    }
    return 0;
}
void displayHelp() {

	cout << "|---------------------------------------------|" << endl;
	cout << "|                                             |" << endl;
	cout << "|               Welcome in help!              |" << endl;
	cout << "|                                             |" << endl;
	cout << "|---------------------------------------------|" << endl;

	cout << "\nIn this help You can check all information about the game, like:" << endl;
	cout << "- Commands\n"
		<< "- Map\n"
		<< "- Map\n"
		<< "- Game info and rules"
		<< "- Info about items\n" << endl;

	cout << "\n\n|---------------------------------------------|" << endl;
	cout << "|                                             |" << endl;
	cout << "|*********** COMMANDS & DIRECTIONS ***********|" << endl;
	cout << "|                                             |" << endl;
	cout << "|---------------------------------------------|\n\n" << endl;

	cout << "As it comes to moving around the map You can use a few comands:\n"
		<< "- N / North - Go up\n"
		<< "- S / South - Go down\n"
		<< "- E / East - Go right\n"
		<< "- W / West - Go left\n"
		<< "- NE / North-East - Go up and right\n"
		<< "- NW / North-West - Go left\n"
		<< "- SE / South-East - Go down and right\n"
		<< "- SW / South-West - Go down and left\n";
	cout << "- I - You can display your equipment. \n";
	cout << "(For comands you can use small and big letters as well)\n";

	cout << "\n--------------GAME DIRECTIONS----------------\n\n\n"
		<< "                 N /\\               \n"
		<< "                   ||               \n"
		<< "           NW *    ||    * NE       \n"
		<< "               \\   ||   /           \n"
		<< "                \\  ||  /            \n"
		<< "                 \\ || /             \n"
		<< "      W <==========()==========> E    \n"
		<< "                  /||\\              \n"
		<< "                 / || \\             \n"
		<< "                /  ||  \\            \n"
		<< "            SW *   ||   *  SE       \n"
		<< "                   ||               \n"
		<< "                 S \\/               \n" << endl;

	cout << " During the game you can meet some activities You have to interact with\n but then You can choose between options using: 1,2,3,4.\n";
	cout << "\n\n|---------------------------------------------|" << endl;
	cout << "|                                             |" << endl;
	cout << "|***************** GAME MAP ******************|" << endl;
	cout << "|                                             |" << endl;
	cout << "|---------------------------------------------|\n\n" << endl;
	cout << "You start at the top left corner. \n\n" << endl;

	int y, x;
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
			cout << board[y][x] << board[y][x] << board[y][x];
		std::cout << std::endl;
	}

	cout << "\n\n|---------------------------------------------|" << endl;
	cout << "|                                             |" << endl;
	cout << "|************* GAME INFO & RULES**************|" << endl;
	cout << "|                                             |" << endl;
	cout << "|---------------------------------------------|\n\n" << endl;
	cout << "\nIn this game You start at the beginning of the maze.\nYour goal is reach to the and of the one.\n"
		<< "During the game You have to deal with some activities.\n"
		<< "Sometimes You'll have to solve a mystery or even fight with a monster!\n"
		<< "You have some aquipment at the beginning. You have:\n"
		<< "- Armour (less damage from your opponent attack)\n"
		<< "- Weapon (your attack makes more damage)\n"
		<< "- Ring (???)\n"
		<< "- Elixir (it gives You more HP)\n"
		<< "- 1 kilo of potatos (You can make a dinner :) )\n" << endl;
	cout << "During the game You can collect new items or trade them in a shop and exchange for GOLD." << endl;
}
Player createPlayer(Item items[])
{
	Player player;
	player.hp = 100;
	player.maxDmg = 10;
	player.minDmg = 6;
	player.armor = 0;
	player.money = 0;
	player.maxCapacity = 100;
	for (int i = 0; i < 10; i++)
	{
		player.equipment[i] = items[0];
	}
	for (int i = 0; i < 3; i++)
	{
		player.onHero[i] = items[0];
	}

	return player;
}

void createItems(Item items[])
{
	items[0].name = "<empty slot>";
	items[0].type = empt;
	items[0].bonus = 0;
	items[0].weight = 0;
	items[1].name = "miecz";
	items[1].type = weapon;
	items[1].bonus = 3;
	items[1].weight = 4;
	items[2].name = "torba";
	items[2].type = backpack;
	items[2].bonus = 3;
	items[2].weight = 2;
	items[3].name = "kurtka";
	items[3].type = armor;
	items[3].bonus = 1;
	items[3].weight = 2;
	items[4].name = "<rekawice goloty>";
	items[4].type = weapon;
	items[4].bonus = 5;
	items[4].weight = 10;



}
bool isWall(int x, int y)
{
	if (board[y][x] == ((char)176))
	{
		cout << "Because I don't think you're going where you think you're going" << endl;
		Sleep(2000);
		return 1;
	}
	else
	{
		return 0;
	}
	if (boardNotForUser[y][x] == ((char)176))
	{
		cout << "Because I don't think you're going where you think you're going" << endl;
		Sleep(2000);
		return 1;
	}
	else
	{
		return 0;
	}
}

void printTable(char board[10][10])
{
	int y, x;
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
			std::cout << board2[y][x] << board[y][x] << board2[y][x];
		std::cout << std::endl;
	}
}
int fighting(struct Player& player, int hpMonster, int minDmgMonster, int maxDmgMonster, std::string monsterName)
{
	srand(time(NULL));
	int dmg;
	int turn = 0;
	while (player.hp > 0 && hpMonster > 0) {
		if (turn % 2 == 0)
		{
			dmg = rand() % player.minDmg + (player.maxDmg - player.minDmg + 1);
			hpMonster -= dmg;
			std::cout << "\ngracz dziabnal " << monsterName << " za " << dmg << " obrazen. Pozostale HP " << monsterName << ": " << hpMonster;
			turn++;
		}
		else
		{
			dmg = rand() % minDmgMonster + (maxDmgMonster - minDmgMonster + 1);
			player.hp -= dmg - player.armor;
			std::cout << "\nMis dziabnal gracza za " << dmg << " obrazen. Pozostale HP Gracza: " << player.hp;
			turn++;

		}

	}
	if (player.hp <= 0)
		return 0;
	else
		return 1;
}
void shiningFightField(struct Player& player) {

	cout << "\"This inhuman place makes human monsters.\" ― Stephen King, The Shining\n"
		"\nThe alley ends here. Behind a corner of the wall, in a dark nook cross paths little girl twins. \n\nYou need to decide what you are going to do:\n"
		"1. Struggle with them and gain some valuable information\n2. Walk away (you will lose 80% of your HP)" << endl;
	int x;
	while (true) {
		cin >> x;//TODO: sprawdz walidacje podwojnych czarow xd
		cin.clear();
		cin.ignore();
		if ((x == 1) || (x == 2))
			break;
		else {
			cout << "Invalid input. Try again!" << endl;
		}
	}
	int isWinner;
	switch (x) {
		
	case 1:
		isWinner = fighting(player, 100, 4, 8, "Dzwiedziedz");
		if (isWinner == 1)
		{
			cout << "Congratulations! You are still alive! I have a pro-tip for you, try diagonal!";
		}
		else {
			cout << "GAME OVER! See you next time...";
		}
		break;

	case 2:

		// wywolanie funkcji ktora zabiera zycie
		cout << "\"No one will blame you for giving up. In fact, quitting at this point is a perfectly reasonable response. - GLADOS PORTAL\"" << endl;
		cout << "You lose 80% of your HP, but youa are free. Walk away!" << endl;
		break;
	}
}
void giveGold(struct Player& player, int money)
{
	player.money += money;
}
void dealDmg(struct Player& player, int dmg)
{
	player.hp += dmg;
}
void giveItem(Player& player, Item items[], int number)
{

	int isFull = 0;
	for (int i = 0; i < 10; i++)
	{
		//std::cout << player.equipment[i].name;
		if (player.equipment[i].type == empt)
		{
			player.equipment[i] = items[number];
			isFull = 1;
			break;

		}



	}
	if (isFull == 0)
		std::cout << "no space in inventory(max 10 slots)";

}
void dropItem(Player& player, Item items[], int number)
{
	player.equipment[number] = items[0];

}
void oldWoman(struct Player& player, Item items[]) {

	cout << "Suddenly, behind the corner, The Old Women appears.\n\"I was waiting for you\" - she said.\n"
		"In the maze you will need a few items. \"I can give you one. Only one! Choose:\"" << endl;

	cout << "\n1. Energy Drink - Red Bull\n2. Nike backpack\n3. Information";

	int x;
	while (true) {
		cin >> x;
		cin.clear();
		cin.ignore();
		if ((x == 1) || (x == 2) || (x == 3))
			break;
		else {


			cout << "Invalid input. Try again!" << endl;
		}
	}

	switch (x)
	{
	case 1:
		giveItem(player, items, 2);
		break;
	case 2:
		giveItem(player, items, 3);
		break;
	case 3:
		cout << "Beware of the northeast.Last field hides the trap" << endl;
	}
}
void startGame()
{
	cout << "Hello my Dear friend. Welcome in Czadowa Game. This is an amazing place to be. Do you remember Heraclitus, the Greek philosopher ? He said, “Change is the only constant in life.” This is exactly what you have to expect from this world.You never know  who you will meet or in which world you will find.Are you ready ? Let the game begin.\n";
	
	system("Color B5");
	int xmove = 1;
	int ymove = 1;
	int xposition = 1;
	int yposition = 1;
	string choiceDirection = "";
	Item items[10];
	createItems(items);
	Player player = createPlayer(items);
	while (true)
	{
		
		
		board[yposition][xposition] = 1;
		printTable(board);
		cin >> choiceDirection;
		transform(choiceDirection.begin(), choiceDirection.end(), choiceDirection.begin(), ::toupper);

		if (choiceDirection == "N" || choiceDirection == "NORTH") {
			ymove--;
			board[yposition][xposition] = ' ';

			if (isWall(xmove, ymove) == 0)

				yposition = ymove;
			else
				ymove++;
		}

		if (choiceDirection == "S" || choiceDirection == "SOUTH") {
			ymove++;
			board[yposition][xposition] = ' ';

			if (isWall(xmove, ymove) == 0)
				yposition = ymove;
			else
				ymove--;
		}
		if (choiceDirection == "W" || choiceDirection == "WEST") {
			xmove--;
			board[yposition][xposition] = ' ';

			if (isWall(xmove, ymove) == 0)
				xposition = xmove;
			else
				xmove++;
		}
		if (choiceDirection == "E" || choiceDirection == "EAST") {
			xmove++;
			board[yposition][xposition] = ' ';

			if (isWall(xmove, ymove) == 0)
				xposition = xmove;
			else
				xmove--;
		}
		if (choiceDirection == "NE" || choiceDirection == "NORTHEAST")
		{
			ymove--;
			xmove--;
			board[yposition][xposition] = ' ';
			if (isWall(xmove, ymove) == 0) {
				xposition = xmove;
				yposition = ymove;
			}
			else
			{
				ymove++;
				xmove++;
			}
		};
		if (choiceDirection == "NW" || choiceDirection == "NORTHWEST")
		{
			ymove--;
			xmove++;
			board[yposition][xposition] = ' ';
			if (isWall(xmove, ymove) == 0) {
				xposition = xmove;
				yposition = ymove;
			}
			else
			{
				ymove++;
				xmove--;
			}
		}
		if (choiceDirection == "SW" || choiceDirection == "SOUTHEAST")
		{
			ymove++;
			xmove--;
			board[yposition][xposition] = ' ';
			if (isWall(xmove, ymove) == 0) {
				xposition = xmove;
				yposition = ymove;
			}
			else
			{
				ymove--;
				xmove++;
			}
		}
		if (choiceDirection == "SE" || choiceDirection == "SOUTHWEST")
		{
			ymove++;
			xmove++;
			board[yposition][xposition] = ' ';
			if (isWall(xmove, ymove) == 0) {
				xposition = xmove;
				yposition = ymove;
			}
			else
			{
				ymove--;
				xmove--;
			}
		}
		if (choiceDirection == "H" || choiceDirection == "HELP")
		{
			displayHelp();
			Sleep(4000);
		}
		if (choiceDirection == "I" || choiceDirection == "EQUIPMENT")
			//FUNKCJA-ARTURA();
			cout << xmove << "," << ymove << "\n";
		cout << xposition << "," << yposition << "\n";
		
		//system("cls");
		if ((xposition == 2) && (yposition == 1))
			shiningFightField(player);
		if ((xposition == 3) && (yposition == 2))
			oldWoman(player, items);
			
	
		cout << "\n";
	}
}