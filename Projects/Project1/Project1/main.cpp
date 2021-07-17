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
    //Each row will be an array from 1-10 to store if there was a hit or a miss
    //The structure will be made into an array to build the entire board of the game
    char spot;
//    char rowB;
//    char rowC;
//    char rowD;
//    char rowE;
//    char rowF;
//    char rowG;
//    char rowH;
//    char rowI;
//    char rowJ;
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    GameBoard field[100];//Entire game board
    int fire;            //Input for where to fire on the board
    
    //Initialize Variables
    for (int i = 1; i <= 100; i++) {
        field[i].spot = 'x';
    }
    cout << "Start" << endl;
    //Process or map Inputs to Outputs
    for (int i = 1; i <= 10; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 11; i <= 20; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 21; i <= 30; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 31; i <= 40; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 41; i <= 50; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 51; i <= 60; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 61; i <= 70; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 71; i <= 80; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 81; i <= 90; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    for (int i = 91; i <= 100; i++) {
        cout << field[i].spot << "  ";
    }
    cout << endl;
    
    //Display Outputs
    cout << "End" << endl;
    
    //Exit stage right!
    return 0;
}