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
int mainMenu();
void displayHelp();
void startGame();
Player createPlayer(Item items[]);
void createItems(Item items[]);
void printTable(char board[10][10]);
bool isWall(int x, int y);
void shiningFightField(struct Player& player);
void oldWoman(struct Player& player, Item items[]);
int fighting(struct Player& player, int hpMonster, int minDmgMonster, int maxDmgMonster, std::string monsterName);
void giveGold(struct Player& player, int money);
void dealDmg(struct Player& player, int dmg);