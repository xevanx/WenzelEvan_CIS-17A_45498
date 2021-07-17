/*
 * File:   main.cpp
 * Author: Evan Wenzel
 * Purpose: Creating a program that prints to a file and read the file and print to screen
 */

//System Library
#include <iostream>  //Input/Output Library
#include <string>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void arrayToFile(string, int[], const int);
void fileToArray(string, int[], const int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    string fileName;
    const int ARR_SIZE = 9;
    int array[1, 2, 2, 3, 4, 4, 1, 1, 3];
    
    cout << "Please input the name of the txt file to use" << endl;
    cin >> fileName;
    
    arrayToFile(fileName, array[], ARR_SIZE);
    fileToArray (fileName, array[], ARR_SIZE);
    //display output
    cout << totData << endl;
    
    //Exit stage right or left!
    return 0;
}

void arrayToFile (string fileName, int array[], int size) {
    fstream dataFile;
    
    dataFile.open(fileName, ios::in);
    
    for(int i = 0; i < size; i ++) {
        array[i] >> fileName;
    };
}

void fileToArray (string fileName, int array[], int size) {
    fstream dataFile;
    string totData;
    
    dataFile.open(fileName, ios::out);
    
    fileName >> totData;
    
    return totData;
}