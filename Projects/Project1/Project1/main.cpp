/* 
 * File:   main.cpp
 * Author: Evan
 * Purpose: Creating a game of BattleShip in C++
 * Created on July 16, 2021, 7:41 PM
 */


//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
struct GameBoard {
    string name;//Name of the ship in that spot
    char spot;  //A structure to store the entire game board with x & y coordinates
    bool ship;  //A bool for if a boat is in the spot or not
}field[9][10];

void prntBoard();
void setBoard();
void spawnShip();
void checkHit(char, char);
bool checkEnd(bool);

//Execution Begins Here
int main(int argc, char** argv) {
    char newStart;      // Input for if the game should restart or not
    char fireX, fireY;    // Input for where to fire on the board
    bool gameEnd = false; // A check to see if the game end conditions have been met
    bool newGame = false; // A check to see if the player wants to play the game again
    
    //Initializing the board with the first printing
    do {
        setBoard();
        prntBoard();
        spawnShip();

        do {
            prntBoard();
            cout << "Please select a space to fire at, column first then row" << endl;
            cin >> fireX >> fireY;
            checkHit(fireX, fireY);
            cout << endl;
            checkEnd(gameEnd);
        } while (gameEnd = true);

        cout << "Congrats for sinking all the ships"<< endl;
        cout << "Would you like to play again?" << endl;
        cout << "Y or N" << endl;
        cin >> newStart;
        if (newStart = 'Y') {
            newGame = true;
        }
        else {
            return 0;
        }
    } while (newGame = true);
    
    return 0;
}

void setBoard() {
    char box = 254;
    for (int x = 0; x <= 9; x++) {
        for (int y = 0; y <= 10; y++) {
            field[x][y].spot = box;
            field[x][y].ship = false;
        }
    }
}

void spawnShip() {
    string names[5] = {"Battleship", "Submarine", "Cruiser", "Frigate", "Escort"};
    char orient;
    char shipX;
    char shipY;
    
    for (int i = 0; i <= 4; i++) {
        field[shipX][shipY].spot = 'S';
        if (i = 0) {
            cout << "Choose where to place the first spot of the battleship" << endl;
            cout << "First the X coordinate and then the Y" << endl;
            cout << "Input the X coordinate as a number from 1-10" << endl;
            cin >> shipX >> shipY;
            cout << "Now choose if the battleship is vertical: v or horizontal: h" << endl;
            cin >> orient;
            for (int j = 1; j <= 5; j++) {
                if(orient = 'v') {
                    cout << "Please choose the next 4 spots above or below" << endl;
                    cin >> shipY;
                }
                else if (orient = 'h') {
                    cout << "Please choose the next 4 spots to the left or right" << endl;
                    cin >> shipX;
                }
                field[shipX][shipY].ship = true;
            }    
        }
        else if (i = 1) {
            cout << "Choose where to place the first spot of the Cruiser" << endl;
            cout << "First the X coordinate and then the Y" << endl;
            cin >> shipX >> shipY;
            cout << "Now choose if the " << names[i] << " is vertical: v or horizontal: h" << endl;
            cin >> orient;
            for (int j = 1; j <= 3; j++) {
                if(orient = 'v') {
                    cout << "Please choose the next 2 spots above or below" << endl;
                    cin >> shipY;
                }
                else if (orient = 'h') {
                    cout << "Please choose the next 2 spots to the left or right" << endl;
                    cin >> shipX;
                }
                field[shipX][shipY].ship = true;
            }    
        }
        else if (i = 2) {
            cout << "Choose where to place the first spot of the frigate" << endl;
            cout << "First the X coordinate and then the Y" << endl;
            cin >> shipX >> shipY;
            cout << "Now choose if the " << names[i] << " is vertical: v or horizontal: h" << endl;
            cin >> orient;
            for (int j = 1; j <= 4; j++) {
                if(orient = 'v') {
                    cout << "Please choose the next spot above or below" << endl;
                    cin >> shipY;
                }
                else if (orient = 'h') {
                    cout << "Please choose the next spots to the left or right" << endl;
                    cin >> shipX;
                }
                field[shipX][shipY].ship = true;  
            }
        }
        else if (i = 3) {
            for (int j = 1; j <= 3; j++) {
                if(orient = 'v') {
                    cout << "Please choose the next 2 spots above or below" << endl;
                    cin >> shipY;
                }
                else if (orient = 'h') {
                    cout << "Please choose the next 2 spots to the left or right" << endl;
                    cin >> shipX;
                }
                field[shipX][shipY].ship = true;
            }    
        }
        else if (i = 4) {
            for (int j = 1; j <= 4; j++) {
                if(orient = 'v') {
                    cout << "Please choose the next 3 spots above or below" << endl;
                    cin >> shipY;
                }
                else if (orient = 'h') {
                    cout << "Please choose the next 3 spots to the left or right" << endl;
                    cin >> shipX;
                }
                field[shipX][shipY].ship = true;
            }    
        }
    }
}

void prntBoard() {
    cout << endl;
    cout << "A  B  C  D  E  F  G  H  I  J" << endl;
    for (int x = 0; x <= 9; x++) {
        for (int y = 0; y < 10; y++){
            cout << field[x][y].spot << "  ";
            if (y == 9) {
                cout << x + 1 << endl;
            }
        }
    }
}

void checkHit (char fireX, char fireY) {
    if (field[fireX][fireY].ship = true) {
        field[fireX][fireY].ship = false;
        field[fireX][fireY].spot = 'X';
        cout << "That's a hit!!" << endl;
    }
    else if (field[fireX][fireY].ship = false) {
        field[fireX][fireY].spot = 'M';
        cout << "You missed!" << endl;
    }
}

bool checkEnd (bool gameEnd) {
    for (int x = 0; x <= 9; x++) {
        for (int y = 0; y < 10; y++){
            if (field[x][y].ship = true) {
                return false;
            }
        }
    }
    return true;
}