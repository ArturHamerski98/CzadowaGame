#include "strory.h"

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdio>

using namespace std;

// funcja która pobiera help board
void getHelp() {
    cout << " Dupa" << endl; // potyrzebne do debugingu i testów - usun?? jak nie potrzebne
}

//funkcja która startuje gr? 
void startGame() {
    cout << "OKEE" << endl;// potyrzebne do debugingu i testów - usun?? jak nie potrzebne
}

int mainMenu() {

    int option;

    cout << "Welcome to our CzadowaGame!\nIf you want to take part in an excellent adventure press 1.\nTo see the help panel press 2.\nDon’t leave us but if you have to, press 3.\n";
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
        getHelp();
        break;

    case 3:
        cout << "OK, Bye! See you next time!\n";
        break;

    }
    return 0;
}

string convertToUpper(string word) {
    //make capital letters
    char letter;
    for (int i = 0; i <= word.size(); i++) {
        word[i] = toupper(word[i]);
    }
    return word;
}
int main() {
    mainMenu();
    string wordUpper, word = "word";
    wordUpper = convertToUpper(word);
    cout << "Our word in capital letters is " << wordUpper << endl;

    return 0;
}