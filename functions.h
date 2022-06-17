#pragma once
#include <iostream>
#include <string>

enum itemType
{
    weapon = 0,
    armor = 1,
    backpack = 2,
    empt = 3,
    potions = 4,
    other = 5,

};
struct Item {
    std::string name;
    itemType type;
    int weight;
    int bonus;

};
struct Player {
    int hp;
    int money;
    int maxCapacity;
    int minDmg;
    int maxDmg;
    int armor;
    int xposition;
    int yposition;
    Item onHero[3];
    Item equipment[10];
};

void displayHelp();
Player createPlayer(Item items[]);
void createItems(Item items[]);
void printTable(char board[10][10]);
bool isWall(int x, int y, int& counter);
int fighting(struct Player& player, int hpMonster, int minDmgMonster, int maxDmgMonster, std::string monsterName);
void giveGold(struct Player& player, int money);
void dealDmg(struct Player& player, int dmg);
int capacityCounter(struct Player& player);
void inventory(struct Player& player, Item items[]);
int isOverload(struct Player& player);
void printGameOver();
void sphinxRiddle(struct Player& player, Item items[]);
void fightClubField(struct Player& player, Item items[]);
void finalFightField(struct Player& player);
void oldWoman(struct Player& player, Item items[]);
void shopField(struct Player& player, Item items[]);
void WhiteFieldGold(struct Player& player);
void WhiteFieldPotatos(struct Player& player, Item items[]);
void secondRiddle(struct Player& player, Item items[]);
void storyManagement(struct Player& player, Item items[], int xposition, int yposition);
void shiningFightField(struct Player& player);
void isTrap(struct Player& player);
void startGame();
void pressAnythingToContinous();
int mainMenu();