/* 
 * File:   main.cpp
 * Author: Evan
 * Purpose: Creating a game of BattleShip in C++
 * Created on July 16, 2021, 7:41 PM
 */


//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
struct GameBoard {
    char spot; //A structure to store the entire game board
    bool ship; //A check if the spot has a ship there
};

void prntBoard(GameBoard field[9][10]);
void spawnShip(GameBoard field[9][10]);
void checkHit(GameBoard*, char, char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    GameBoard field[9][10];//Entire game board
    char fireRow, fireColumn;//Input for where to fire on the board
    
    //Initialize Variables
//    for (int i = 0; i <= 9; i++) {
//        for (int j = 0; j <= 9; j++){
//            field[i][j].ship = false;
//            cout << field[i][j].ship << endl;
//        }
//    }
    
    //Process or map Inputs to Outputs
    spawnShip(field);
    
    
    //Display Outputs
    prntBoard(field);
    
    cout << "Please select a space to fire at, column first then row" << endl;
    cin >> fireColumn >> fireRow;
    
    if (fireColumn == 'A' || fireColumn == 'a') {
        fireColumn = '0';
    }
    else if (fireColumn == 'B' || fireColumn == 'b') {
        fireColumn = '1';
    }
    else if (fireColumn == 'C' || fireColumn == 'c') {
        fireColumn = '2';
    }
    else if (fireColumn == 'D' || fireColumn == 'd') {
        fireColumn = '3';
    }
    else if (fireColumn == 'E' || fireColumn == 'e') {
        fireColumn = '4';
    }
    else if (fireColumn == 'F' || fireColumn == 'f') {
        fireColumn = '5';
    }
    else if (fireColumn == 'G' || fireColumn == 'g') {
        fireColumn = '6';
    }
    else if (fireColumn == 'H' || fireColumn == 'h') {
        fireColumn = '7';
    }
    else if (fireColumn == 'I' || fireColumn == 'i') {
        fireColumn = '8';
    }
    else if (fireColumn == 'J' || fireColumn == 'j') {
        fireColumn = '9';
    }
    
    checkHit(&field[fireColumn][fireRow], fireRow, fireColumn);
    
    prntBoard(field);
    //Exit stage right!
    return 0;
}

void spawnShip (GameBoard field[9][10]) {
    int shipX;
    int shipY;
    int vertOr;//Random Number to decide if the ship is placed vertical or horizontal
    srand(time(0));
    
    vertOr = (rand() % 2) + 1;//1 means vertical and 2 means horizontal placement
    shipX = (rand() % 10) + 1;
    shipY = (rand() % 10) + 1;
    
    cout << shipX << " " << shipY << endl;
    
    field[shipX][shipY].ship = true;
    
    if (vertOr == 1) {
        cout << vertOr << " means vertical" << endl;
        for (int i = 0; i < 4; i++) {
            shipY = shipY + 1;
            cout << shipY << endl;
            field[shipX][shipY].ship = false;
            cout << "Done" << endl;
            if (field[shipX][shipY].ship = false) {
                cout << "Working" << endl;
            }
        }
    }
    else if (vertOr == 2) {
        cout << vertOr << " means horizontal" << endl;
        for (int i = 0; i < 4; i++) {
            shipX = shipX + 1;
            cout << shipX << endl;
            field[shipX][shipY].ship = false;
            cout << "Done" << endl;
            if (field[shipX][shipY].ship = false) {
                cout << "Working" << endl;
            }
        }
    }
}

void prntBoard (GameBoard field[9][10]) {
    cout << endl;
    cout << "A  B  C  D  E  F  G  H  I  J" << endl;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++){
            if (field[i][j].ship = false) {
                field[i][j].spot = 'X';
                cout << field[i][j].spot << "  ";
            }
            else {
                field[i][j].spot = 'O';
                cout << field[i][j].spot << "  ";
            }
            if (j == 9) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}

void checkHit (GameBoard *Board, char fireRow, char fireColumn) {
    if ((*Board).ship = true) {
        (*Board).spot == 'O';
        cout << "HIT!!!" << endl;
    }
    else {
        (*Board).spot == 'M';
        cout << "MISS!!!" << endl;
    }
}