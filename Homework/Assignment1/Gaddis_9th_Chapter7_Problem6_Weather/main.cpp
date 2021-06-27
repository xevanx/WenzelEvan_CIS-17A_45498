/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 26, 2020, 4:52 PM
 * Purpose: Creating a Hello World Program
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>   //ifstream Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants
const int MONTHS = 3;
const int DAYS = 30;

//Function Prototypes
void pullData(char[][DAYS]);

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    char listData[MONTHS][DAYS] = {}; //Array for storing data
    
    //Initialize all known variables
    pullData(listData);

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    //Exit stage right
    return 0;
}
// pullData is a function that pulls data from txt file and stores it in an array
void pullData(char listData[][DAYS]) {
    ifstream readData; //variable to read data from .txt file
    
    int months = 0, days = 0;
    
    readData.open("RainOrShine.txt");
    if (readData) {
        for (months = 0; months < MONTHS; months++){
            for (days = 0; days < DAYS; days++) {
                readData >> listData[months][days];
            }
        }            
    };
    readData.close();
}
