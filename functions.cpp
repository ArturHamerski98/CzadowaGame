#pragma once
#include <iostream>
#include<string>
#include<algorithm>
#include <windows.h>
#include "functions.h"

#include <conio.h>

using namespace std;
char board[10][10] = {
    {178,178,178,178,178,178,178,178,178,178},
    {178,' ',' ',' ',178,' ',' ',178,' ',178},
    {178,178,178,' ',178,' ',178,178,' ',178},
    {178,' ',' ',' ',178,' ',178,' ',' ',178},
    {178,' ',178,178,178,' ',' ',' ',' ',178},
    {178,' ',' ',' ',178,' ',178,178,' ',178},
    {178,178,178,' ',178,' ',' ',178,' ',178},
    {178,' ',' ',' ',178,178,' ',178,' ',178},
    {178,' ',' ',' ',' ',' ',' ',178,' ',178},
    {178,178,178,178,178,178,178,178,178,178} };

char board2[10][10] = {
    {178,178,178,178,178,178,178,178,178,178},
    {178,' ',' ',' ',178,' ',' ',178,' ',178},
    {178,178,178,' ',178,' ',178,178,' ',178},
    {178,' ',' ',' ',178,' ',178,' ',' ',178},
    {178,' ',178,178,178,' ',' ',' ',' ',178},
    {178,' ',' ',' ',178,' ',178,178,' ',178},
    {178,178,178,' ',178,' ',' ',178,' ',178},
    {178,' ',' ',' ',178,178,' ',178,' ',178},
    {178,' ',' ',' ',' ',' ',' ',178,' ',178},
    {178,178,178,178,178,178,178,178,178,178} };



char boardWithSpecialFields[10][10] = {
{178,178,178,178,178,178,178,178,178,178},
{178,' ',' ',' ',178,' ','x',178,'x',178},
{178,178,178,'x',178,' ',178,178,' ',178},
{178,' ',' ',' ',178,' ',178,' ',' ',178},
{178,'x',178,178,178,' ','x',' ',178,178},
{178,' ',' ','x',178,' ',178,178,' ',178},
{178,178,178,'x',178,' ',' ',178,' ',178},
{178,'x',' ',' ',178,178,' ',178,' ',178},
{178,' ',' ',' ','x',' ',' ',178,'x',178},
{178,178,178,178,178,178,178,178,178,178} };

void printGameOver() {
    cout << "\n";
    char gameOver[18][27] =
    { {178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178 },
    { 178, ' ', ' ', ' ', ' ', ' ', 178, 178, ' ', ' ', ' ', ' ', ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', ' ', ' ', ' ', 178 },
    { 178, ' ', 178, 178, 178, 178, 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', ' ', 178, ' ', ' ', 178, 178, ' ', 178, 178, 178, 178 },
    { 178, ' ', 178, 178, 178, 178, 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', ' ', ' ', ' ', ' ', 178, 178, ' ', 178, 178, 178, 178 },
    { 178, ' ', 178, ' ', ' ', ' ', 178, 178, ' ', ' ', ' ', ' ', ' ', 178, 178, ' ', 178, ' ', 178, ' ', 178, 178, ' ', ' ', ' ', ' ', 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, 178 },
    { 178, ' ', ' ', ' ', ' ', ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', ' ', ' ', ' ', 178 },
    { 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178 },
    { 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178 },
    { 178, ' ', ' ', ' ', ' ', ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', ' ', ' ', ' ', 178, 178, ' ', ' ', ' ', ' ', 178, 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, 178, 178, ' ', 178, 178, ' ', 178, 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', 178, 178, 178, 178, 178, ' ', 178, 178, ' ', 178, 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, ' ', ' ', 178, ' ', ' ', 178, 178, ' ', ' ', ' ', ' ', 178, 178, ' ', ' ', ' ', ' ', 178, 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, 178, ' ', 178, ' ', 178, 178, 178, ' ', 178, 178, 178, 178, 178, ' ', ' ', ' ', 178, 178, 178 },
    { 178, ' ', 178, 178, 178, ' ', 178, 178, 178, ' ', ' ', ' ', 178, 178, 178, ' ', 178, 178, 178, 178, 178, ' ', 178, ' ', ' ', 178, 178 },
    { 178, ' ', ' ', ' ', ' ', ' ', 178, 178, 178, 178, ' ', 178, 178, 178, 178, ' ', ' ', ' ', ' ', 178, 178, ' ', 178, 178, ' ', 178, 178 },
    { 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178 } };

    int y, x;
    for (y = 0; y < 18; y++)
    {
        for (x = 0; x < 27; x++)
            cout << gameOver[y][x];
        std::cout << std::endl;
    }

}

void displayHelp() {
    char temp;
    system("Color 1C");
    cout << "|---------------------------------------------|" << endl;
    cout << "|                                             |" << endl;
    cout << "|               Welcome in help!              |" << endl;
    cout << "|                                             |" << endl;
    cout << "|---------------------------------------------|" << endl;

    cout << "\nIn this help You can check all information about the game, like:" << endl;
    cout << "- Commands\n" <<
        "- Map\n" <<
        "- Map\n" <<
        "- Game info and rules" <<
        "- Info about items\n" << endl;

    cout << "\n\n|---------------------------------------------|" << endl;
    cout << "|                                             |" << endl;
    cout << "|*********** COMMANDS & DIRECTIONS ***********|" << endl;
    cout << "|                                             |" << endl;
    cout << "|---------------------------------------------|\n\n" << endl;

    cout << "As it comes to moving around the map You can use a few comands:\n" <<
        "- N / North - Go up\n" <<
        "- S / South - Go down\n" <<
        "- E / East - Go right\n" <<
        "- W / West - Go left\n" <<
        "- NE / North-East - Go up and right\n" <<
        "- NW / North-West - Go left\n" <<
        "- SE / South-East - Go down and right\n" <<
        "- SW / South-West - Go down and left\n";
    cout << "- I - You can display your equipment. \n";
    cout << "- P - You can display your stats. \n";
    cout << "(For comands you can use small and big letters as well)\n";

    cout << "\n--------------GAME DIRECTIONS----------------\n\n\n" <<
        "                 N /\\               \n" <<
        "                   ||               \n" <<
        "           NW *    ||    * NE       \n" <<
        "               \\   ||   /           \n" <<
        "                \\  ||  /            \n" <<
        "                 \\ || /             \n" <<
        "      W <==========()==========> E    \n" <<
        "                  /||\\              \n" <<
        "                 / || \\             \n" <<
        "                /  ||  \\            \n" <<
        "            SW *   ||   *  SE       \n" <<
        "                   ||               \n" <<
        "                 S \\/               \n" << endl;

    cout << " During the game you can meet some activities You have to interact with\n but then You can choose between options using: 1,2,3,4.\n";
    cout << "\n\n|---------------------------------------------|" << endl;
    cout << "|                                             |" << endl;
    cout << "|***************** GAME MAP ******************|" << endl;
    cout << "|                                             |" << endl;
    cout << "|---------------------------------------------|\n\n" << endl;
    cout << "You start at the top left corner. \n\n" << endl;

    int y, x;
    for (y = 0; y < 10; y++) {
        for (x = 0; x < 10; x++)
            cout << board2[y][x] << board[y][x] << board2[y][x];
        std::cout << std::endl;
    }

    cout << "\n\n|---------------------------------------------|" << endl;
    cout << "|                                             |" << endl;
    cout << "|************* GAME INFO & RULES**************|" << endl;
    cout << "|                                             |" << endl;
    cout << "|---------------------------------------------|\n\n" << endl;
    cout << "\nIn this game You start at the beginning of the maze.\nYour goal is reach to the and of the one.\n" <<
        "During the game You have to deal with some activities.\n" <<
        "Sometimes You'll have to solve a mystery or even fight with a monster!\n" <<
        "You have some aquipment at the beginning. You have:\n" <<
        "- Armour (less damage from your opponent attack)\n" <<
        "- Weapon (your attack makes more damage)\n" <<
        "- Backpack (increases your lifting capacity)\n" <<
        "- Elixir (it gives You more HP)\n" <<
        "- 1 kilo of potatos (You can make a dinner :) )\n" << endl;
    cout << "During the game You can collect new items or trade them in a shop and exchange for GOLD." << endl;

    cout << "If you want exit help click - X" << endl;
    cin >> temp;
    system("cls");
    system("Color C1");
}
Player createPlayer(Item items[]) {
    Player player;
    player.hp = 100;
    player.maxDmg = 20;
    player.minDmg = 10;
    player.armor = 0;
    player.money = 0;
    player.maxCapacity = 100;
    for (int i = 0; i < 10; i++) {
        player.equipment[i] = items[0];
    }
    for (int i = 0; i < 3; i++) {
        player.onHero[i] = items[0];
    }

    return player;
}

void createItems(Item items[]) {
    items[0].name = "<empty slot>";
    items[0].type = empt;
    items[0].bonus = 0;
    items[0].weight = 0;

    items[1].name = "Delicious Polish Potatoes";
    items[1].type = other;
    items[1].bonus = 0;
    items[1].weight = 69;

    items[2].name = "Nike Backpack";
    items[2].type = backpack;
    items[2].bonus = 3;
    items[2].weight = 10;

    items[3].name = "Bluza Ekipy Friza";
    items[3].type = armor;
    items[3].bonus = 1;
    items[3].weight = 2;

    items[4].name = "Rekawice Andrzeja Goloty";
    items[4].type = weapon;
    items[4].bonus = 10;
    items[4].weight = 12;

    items[5].name = "Energy Drink";
    items[5].type = potions;
    items[5].bonus = 60;
    items[5].weight = 4;

    items[6].name = "ULUMULU Sword";
    items[6].type = weapon;
    items[6].bonus = 3;
    items[6].weight = 10;

    items[7].name = "Disposable Ladybug bag";
    items[7].type = backpack;
    items[7].bonus = 2;
    items[7].weight = 14;
}
void pressAnythingToContinous() {
    char temp;
    cout << "\nPress anything to continue the journey!";
    temp = _getch();

}
bool isWall(int x, int y, int& counter) {
    if (boardWithSpecialFields[y][x] == ((char)178)) {
        cout << "Because I don't think you're going where you think you're going\n" << endl;
        Sleep(2000);
        counter++;
        if (counter == 2) {
            cout << "\nAre you stupid?\n";
            Sleep(1000);
        }

        return 1;

    }
    else {
        return 0;
    }
    if (board[y][x] == ((char)178)) {
        cout << "Because I don't think you're going where you think you're going\n" << endl;
        Sleep(2000);
        counter++;
        if (counter == 3) {
            cout << "\nAre you stupid?\n";
            counter = 0;
        }

        return 1;
    }
    else {
        return 0;
    }

}
bool isWall(int x, int y) {
    if (board[y][x] == ((char)178)) {
        cout << "Because I don't think you're going where you think you're going\n" << endl;
        Sleep(2000);
        return 1;
    }
    else {
        return 0;
    }
    if (boardWithSpecialFields[y][x] == ((char)178)) {
        cout << "Because I don't think you're going where you think you're going\n" << endl;
        Sleep(2000);
        return 1;
    }
    else {
        return 0;
    }
}

void printTable(char board[10][10]) {
    int y, x;
    for (y = 0; y < 10; y++) {
        for (x = 0; x < 10; x++)
            std::cout << board2[y][x] << board[y][x] << board2[y][x];
        std::cout << std::endl;
    }
}
int fighting(struct Player& player, int hpMonster, int minDmgMonster, int maxDmgMonster, std::string monsterName) {
    char temp;
    srand(time(NULL));
    int dmg;
    int turn = 0;
    while (player.hp > 0 && hpMonster > 0) {
        if (turn % 2 == 0) {
            dmg = rand() % player.minDmg + (player.maxDmg - player.minDmg + 1);
            hpMonster -= dmg;
            system("Color 2");
            std::cout << "\nKovolsy hit " << monsterName << " for " << dmg << "DMG. HP " << monsterName << ": " << hpMonster;
            turn++;
            Sleep(300);
        }
        else {
            dmg = rand() % minDmgMonster + (maxDmgMonster - minDmgMonster + 1);
            player.hp -= dmg - player.armor;
            system("Color 4");
            std::cout << "\n" << monsterName << " hit player Kovalsky for " << dmg << " DMG. Kovalsky HP: " << player.hp;
            turn++;
            Sleep(300);

        }

    }
    system("Color C1");
    if (player.hp <= 0) {
        return 0;
    }
    else {

        return 1;
    }

}

void giveGold(struct Player& player, int money) {
    player.money += money;
}
void dealDmg(struct Player& player, int dmg) {
    player.hp += dmg;
}
void giveItem(Player& player, Item items[], int number) {

    int isFull = 0;
    for (int i = 0; i < 10; i++) {
        //std::cout << player.equipment[i].name;
        if (player.equipment[i].type == empt) {
            player.equipment[i] = items[number];
            isFull = 1;
            break;
        }
    }
    if (isFull == 0)
        std::cout << "no space in inventory(max 10 slots)\n";
    else
        cout << "You get " << items[number].name;
}
void dropItem(Player& player, Item items[], int number) {
    player.equipment[number] = items[0];
}

void playerInfo(struct Player& player) {

    cout << "\nPLAYER INFO : \n";
    cout << "HP: " << player.hp << "/100\n" << "GOLD:" << player.money << "\nMin Dmg: " << player.minDmg + player.onHero[0].bonus << "\nMax Dmg: " << player.maxDmg + player.onHero[0].bonus << "\nArmor: " << player.armor + player.onHero[1].bonus << "\nCapacity: " << capacityCounter(player) << "/" << player.maxCapacity + player.onHero[2].bonus;
    cout << "\nEquiped:" << "\nWeapon: " << player.onHero[0].name << "\nArmor: " << player.onHero[1].name << "\nBackpack: " << player.onHero[2].name << endl;

}

int capacityCounter(struct Player& player) {
    int cap = 0;
    for (int i = 0; i < 10; i++) {
        cap += player.equipment[i].weight;

    }
    return cap;

}
int isOverload(struct Player& player) {
    int canGo = 0;

    if (capacityCounter(player) > 100) {
        canGo = 1;
        cout << "\nYou are overloaded! Drop some items to continou adventure\n";
        Sleep(1500);
    }

    return canGo;
}
void inventory(struct Player& player, Item items[]) {
    int selectItem;
    int selectWhatToDoWithItem;
    cout << "Nr ||| Name  ||| Weight ||| Bonus\n";
    for (int i = 0; i < 10; i++) {
        std::cout << i << " " << player.equipment[i].name << "   " << player.equipment[i].weight << "   " << player.equipment[i].bonus << "   " << std::endl;

    }
    cout << "Select item: ";

    cin >> selectItem;
    if ((player.equipment[selectItem].type == weapon) || (player.equipment[selectItem].type == armor) || (player.equipment[selectItem].type == backpack)) {
        cout << "\n1 Equpip item\n2 Drop Item\n3 Back\n>> ";
        cin >> selectWhatToDoWithItem;
        if (selectWhatToDoWithItem == 1) {
            if (player.equipment[selectItem].type == weapon)
                player.onHero[0] = player.equipment[selectItem];
            if (player.equipment[selectItem].type == armor)
                player.onHero[1] = player.equipment[selectItem];
            if (player.equipment[selectItem].type == backpack)
                player.onHero[2] = player.equipment[selectItem];
        }
        if (selectWhatToDoWithItem == 2) {
            for (int i = 0; i < 3; i++) {
                if (player.equipment[selectItem].name == player.onHero[i].name)
                    player.onHero[i] = items[0];
            }

            player.equipment[selectItem] = items[0];

        }

    }
    else if (player.equipment[selectItem].type == potions) {
        cout << "\n1 Use item\n2 Drop Item\n3 Back\n>> ";
        cin >> selectWhatToDoWithItem;
        if (selectWhatToDoWithItem == 1) {
            player.hp += player.equipment[selectItem].bonus;
            if (player.hp > 100)
                player.hp = 100;
            player.equipment[selectItem] = items[0];
        }
        if (selectWhatToDoWithItem == 2) {
            player.equipment[selectItem] = items[0];
        }
    }
    else if (player.equipment[selectItem].type == other) {
        cout << "\n1 Drop item\n2 Back\n>>";
        cin >> selectWhatToDoWithItem;
        if (selectWhatToDoWithItem == 1) {
            player.equipment[selectItem] = items[0];
        }
    }
}

void shiningFightField(struct Player& player) {
    cout << "\"This inhuman place makes human monsters.\" ― Stephen King, The Shining\n"
        "\nThe alley ends here. Behind a corner of the wall, in a dark nook cross paths little girl twins.\n\nYou need to decide what you are going to do:\n"
        "1. Struggle with them and gain some valuable information\n2. Walk away (you will lose 80% of your HP)\n>> ";
    int x;
    while (true) {
        cin >> x; //TODO: sprawdz walidacje podwojnych czarow xd
        cin.clear();
        cin.ignore();
        if ((x == 1) || (x == 2))
            break;
        else {
            cout << "Invalid input. Try again!" << endl;
        }
    }

    switch (x) {
    case 1:
        int isWinner;
        isWinner = fighting(player, 100, 6, 10, "Twins");
        if (isWinner == 1) {
            cout << "\n--- Congratulations! You are still alive! I have a pro-tip for you, try diagonal! ---\n";
            pressAnythingToContinous();
        }
        else {
            cout << "\nGAME OVER! See you next time...";
            pressAnythingToContinous();
        }
        break;
    case 2:

        cout << "\"No one will blame you for giving up. In fact, quitting at this point is a perfectly reasonable response. - GLADOS PORTAL\"" << endl;
        cout << "You lose 40 of your HP, but you are free. Walk away!" << endl;
        dealDmg(player, -40);
        break;
    }
}

//Funkcja pulapki
void isTrap(struct Player& player) {
    cout << "Oh my gosh!! What have you done?? It's a trap!! You're dead!!!\n";
    dealDmg(player, -100);
    pressAnythingToContinous();
}

// funkcja zagadki Sphinxa
void sphinxRiddle(struct Player& player, Item items[]) {
    cout << "Almost there! Suddenly a huge sphinx blocks your way.\n\"Are you good at riddles?\" he whispered.\n"
        "\"Answer mine and you shall pass. \"There it is : \"\n" << endl;
    cout << "\"If you don't keep me, I'll break. What am I?\":\n1. A promise\n2. A tureen\n3. A baby\n>> ";

    int x;
    while (true) {
        cin >> x;
        cin.clear();
        cin.ignore();
        if ((x == 1) || (x == 2) || (x == 3))
            break;
        else {
            cout << "\nInvalid input. Try again!" << endl;
        }
    }

    switch (x) {
    case 1:
        cout << "\nCongratulation, my friend! Right answer, you gain Energy Drink.\n";
        giveItem(player, items, 5);
        break;
    case 2:
        cout << "\n\"As a wise man once said: For every complicated problem, there's a solution that is quick, simple and wrong.\" - GLADOS\n";
        dealDmg(player, -5);
        break;
    case 3:
        cout << "\n\"As a wise man once said: For every complicated problem, there's a solution that is quick, simple and wrong.\" - GLADOS\n";
        dealDmg(player, -5);
        break;
    }
    pressAnythingToContinous();
} // ########### BLOKUJEMY POLE? CZY ZABIERAMY ZYCIE (W PRZYPADKU ZLEJ ODPOWIEDZI) = ZaAbieramy zycie!

//The fight club fight
void fightClubField(struct Player& player, Item items[]) {

    cout << "\"I don't want to die without any scars.\" ― Chuck Palahniuk, Fight Club\n\"So confront me!\" - shouted Chuck and attacked you.\n\n";
    int isWinner;
    isWinner = fighting(player, 100, 4, 8, "Chuck");
    if (isWinner == 1) {
        cout << "\n\nCongratulations! As a winner you gain the \"Rekawice Andrzeja Goloty\".\n";
        giveItem(player, items, 4);
        pressAnythingToContinous();
    }
    else {
        cout << "\nYou lose! See you next time...\n";
        pressAnythingToContinous();
    }
}

void finalFightField(struct Player& player) {

    cout << "\nThe decisive moment has just come. The final battle starts now!\n";

    int isWinner;
    isWinner = fighting(player, 100, 4, 8, "He Who Must Not Be Named");
    if (isWinner == 1) {
        cout << "CONGRATULATIONS. You are winner, as a reward you get a valuable quote:" << endl;
        cout << "\nCRINGE ALERT!\n" << endl;
        Sleep(2000);
        cout << "\"Fight for your dreams, and your dreams will fight for you.\" — Paulo Coelho" << endl;
        pressAnythingToContinous();
    }
    else {
        cout << "\"Speaking of curiosity: you're curious about what happens after you die, right? Guess what: I know.\" - GLADOS" << endl;
        pressAnythingToContinous();
    }
}

void oldWoman(struct Player& player, Item items[]) {

    cout << "\nSuddenly, behind the corner, The Old Women appears.\n\"I was waiting for you\" - she said.\n"
        "In the maze you will need a few items. \"I can give you one. Only one! Choose:\"" << endl;

    cout << "\n1. Energy Drink - Red Bull\n2. Nike backpack\n3. Information\n>> ";

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

    switch (x) {
    case 1:
        giveItem(player, items, 5);
        break;
    case 2:
        giveItem(player, items, 2);
        break;
    case 3:
        cout << "\n--- Beware of the northeast.Last field hides the trap ---" << endl;
        pressAnythingToContinous;
    }
}

void shopField(struct Player& player, Item items[]) {

    cout << "\nAfter an exhausting journey you have come to the store. Rest, then make profitables trades!" << endl;

    int x;
    int found = 0;
    do {
        cout << "1. Buy Energy Drink (Price: 20 GOLD)\n2. Buy potatoes(Price: 10 GOLD)\n3. Buy Bluza Ekipy Friza (Price: 50 GOLD)\n4. Buy Boxing gloves (Price: 10 GOLD)\n5. Buy Nike backpack (Price: 40 GOLD)\n6. End of trades!\n>> ";
        while (true) {
            cin >> x;
            cin.clear();
            cin.ignore();
            if ((x == 1) || (x == 2) || (x == 3) || (x == 4) || (x == 5) || (x == 6))
                break;
            else {
                cout << "Invalid input. Try again!" << endl;
            }
        }
        if (x == 1) {
            if (player.money >= 20) {
                giveItem(player, items, 5);
                giveGold(player, -20);
            }
            else {
                cout << "\nNot enough money!\n";
            }

        }
        else if (x == 2) {
            if (player.money >= 10) {
                giveItem(player, items, 1);
                giveGold(player, -10);
            }
            else {
                cout << "\nNot enough money!";
            }

        }
        else if (x == 3) {
            if (player.money >= 50) {
                giveItem(player, items, 3);
                giveGold(player, -50);
            }
            else {
                cout << "\nNot enough money!";
            }

        }
        else if (x == 4) {
            if (player.money >= 10) {
                giveItem(player, items, 4);
                giveGold(player, -10);
            }
            else {
                cout << "\nNot enough money!";
            }
        }
        else if (x == 5) {
            if (player.money >= 40) {
                giveItem(player, items, 2);
                giveGold(player, -40);
            }
            else {
                cout << "\nNot enough money!";
            }
        }
        else if (x == 6) {
            giveItem(player, items, 2);
            giveGold(player, 50);
        }
    } while (x != 6);
}

void WhiteFieldGold(struct Player& player) {

    cout << "\nWow! You find a pouch of gold.\n";
    giveGold(player, 80);
    Sleep(1000);
}

void WhiteFieldPotatos(struct Player& player, Item items[]) {
    cout << "\nWow! You find a bag of potatoes.\n";
    giveItem(player, items, 1);
}

// funkcja zagadki 
void secondRiddle(struct Player& player, Item items[]) {
    cout << "\nWell, well, well. Look whoose here. I have a riddle for you. If you guess you gain some valuable items if not, you loose some HP.\n";
    cout << "Listen to me carefully:\n\nIf I have it, I don't share it. If I share it, I don't have it. \nWhat is it?\n";
    cout << "1. A money\n2. A secret\n3. A wife\n>> ";

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

    switch (x) {
    case 1:
        cout << "Wrong answer. You lose 9 hp.\n";
        dealDmg(player, -9);
        break;
    case 2:
        cout << "Congrats! Right answer. You gain Energy Drink.\n";
        giveItem(player, items, 5);
        break;
    case 3:
        cout << "\"There are no right answers to wrong questions.\" - Ursula K. Le Guin. \nYou lose 9 hp.";
        dealDmg(player, -9);
        break;
    }
    pressAnythingToContinous();
}

// funkcja zarzadzajaca historia
void storyManagement(struct Player& player, Item items[], int yposition, int xposition) {

    // funkcja ktora sprawdza czy dane pole jest historia, jesli tak to ktora i wywoluje poszczegolne funkcje odpowiedzialne za dane pole
    if ((boardWithSpecialFields[1][8] == 'x') && (yposition == 1) && (xposition == 8)) {
        isTrap(player);
        boardWithSpecialFields[1][8] = 'O';
    }
    else if ((boardWithSpecialFields[2][3] == 'x') && (yposition == 2) && (xposition == 3)) {
        fightClubField(player, items);
        boardWithSpecialFields[2][3] = 'O';
    }
    else if ((boardWithSpecialFields[4][6] == 'x') && (yposition == 4) && (xposition == 6)) {
        sphinxRiddle(player, items);
        boardWithSpecialFields[4][6] = 'O';
    }
    else if ((boardWithSpecialFields[6][3] == 'x') && (yposition == 6) && (xposition == 3)) {
        secondRiddle(player, items);
        boardWithSpecialFields[6][3] = 'O';
    }
    else if ((boardWithSpecialFields[1][6] == 'x') && (yposition == 1) && (xposition == 6)) {
        shiningFightField(player);
        boardWithSpecialFields[1][6] = 'O';
    }
    else if ((boardWithSpecialFields[4][1] == 'x') && (yposition == 4) && (xposition == 1)) {
        oldWoman(player, items);
        boardWithSpecialFields[4][1] = 'O';
    }
    else if ((boardWithSpecialFields[8][4] == 'x') && (yposition == 8) && (xposition == 4)) {
        shopField(player, items);
        boardWithSpecialFields[8][4] = 'O';
    }
    else if ((boardWithSpecialFields[8][8] == 'x') && (yposition == 8) && (xposition == 8)) {
        finalFightField(player);
        boardWithSpecialFields[8][8] = 'O';
    }
    else if ((boardWithSpecialFields[7][1] == 'x') && (yposition == 7) && (xposition == 1)) {
        WhiteFieldPotatos(player, items);
        boardWithSpecialFields[7][1] = 'O';
    }
    else if ((boardWithSpecialFields[5][3] == 'x') && (yposition == 5) && (xposition == 3)) {
        WhiteFieldGold(player);
        boardWithSpecialFields[5][3] = 'O';
    }
    else {
        cout << "\nNothing special here." << endl;
    }
}

void startGame() {
    cout << "\nHello my Dear friend. Welcome in Czadowa Game.\nThis is an amazing place to be. Do you remember Heraclitus, the Greek philosopher? He said, \"Change is the only constant in life.\"\nThis is exactly what you have to expect from this world.You never know who you will meet or in which world you will find.\nAre you ready? Let the game begin.\n" << endl;
    pressAnythingToContinous();
    int counter = 0;
    system("Color C1");
    int xmove = 1;
    int ymove = 1;
    int xposition = 1;
    int yposition = 1;
    string choiceDirection = "";
    Item items[10];
    createItems(items);
    Player player = createPlayer(items);
    player.equipment[0] = items[1];
    player.equipment[1] = items[6];
    player.equipment[2] = items[7];

    while (true) {
        Sleep(1000);
        system("cls");
        board[yposition][xposition] = 1;
        printTable(board);
        cout << ">> ",
            cin >> choiceDirection;
        transform(choiceDirection.begin(), choiceDirection.end(), choiceDirection.begin(), ::toupper);

        if (choiceDirection == "N" || choiceDirection == "NORTH") {
            ymove--;
            board[yposition][xposition] = ' ';

            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0))

                yposition = ymove;
            else
                ymove++;
        }

        if (choiceDirection == "S" || choiceDirection == "SOUTH") {
            ymove++;
            board[yposition][xposition] = ' ';

            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0))
                yposition = ymove;

            else
                ymove--;
        }
        if (choiceDirection == "W" || choiceDirection == "WEST") {
            xmove--;
            board[yposition][xposition] = ' ';

            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0))
                xposition = xmove;

            else
                xmove++;
        }
        if (choiceDirection == "E" || choiceDirection == "EAST") {
            xmove++;
            board[yposition][xposition] = ' ';

            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0))
                xposition = xmove;

            else
                xmove--;
        }
        if (choiceDirection == "NE" || choiceDirection == "NORTHEAST") {
            ymove--;
            xmove++;
            board[yposition][xposition] = ' ';
            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0)) {
                xposition = xmove;
                yposition = ymove;
            }
            else {
                ymove++;
                xmove--;
            }
        };

        if (choiceDirection == "NW" || choiceDirection == "NORTHWEST") {
            ymove--;
            xmove--;
            board[yposition][xposition] = ' ';
            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0)) {
                xposition = xmove;
                yposition = ymove;
            }
            else {
                ymove++;
                xmove++;
            }
        }
        if (choiceDirection == "SW" || choiceDirection == "SOUTHEAST") {
            ymove++;
            xmove--;
            board[yposition][xposition] = ' ';
            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0)) {
                xposition = xmove;
                yposition = ymove;
            }
            else {
                ymove--;
                xmove++;
            }
        }
        if (choiceDirection == "SE" || choiceDirection == "SOUTHWEST") {
            ymove++;
            xmove++;
            board[yposition][xposition] = ' ';
            if ((isWall(xmove, ymove, counter) == 0) && (isOverload(player) == 0)) {
                xposition = xmove;
                yposition = ymove;
            }
            else {
                ymove--;
                xmove--;
            }
        }
        if (choiceDirection == "H" || choiceDirection == "HELP") {
            displayHelp();
            Sleep(4000);
        }
        if (choiceDirection == "X") {
            system("cls");
            system("Color 1C");
        }
        if (choiceDirection == "I" || choiceDirection == "EQUIPMENT")
            inventory(player, items);

        if (choiceDirection == "P" || choiceDirection == "PLAYER") {
            playerInfo(player);
            pressAnythingToContinous();
        }

        storyManagement(player, items, yposition, xposition);

        if (player.hp <= 0) {
            printGameOver();
            exit(0);
        }

        cout << "\n";
    }
}

int mainMenu() {
    system("Color C1");
    int option;
    cout << "|---------------------------------------------|" << endl;
    cout << "|                                             |" << endl;
    cout << "|                   Welcome!                  |" << endl;
    cout << "|                                             |" << endl;
    cout << "|---------------------------------------------|" << endl;

    cout << "If you want to take part in an excellent adventure press 1.\nTo see the help panel press 2.\nDon't leave us but if you have to, press 3.\n";
    while (true) {
        cout << ">> ",
            cin >> option; //TODO: sprawdz walidacje podwojnych czarow xd
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
        mainMenu();
        break;

    case 3:
        cout << "OK, Bye! See you next time!\n";
        break;

    }
    return 0;
}