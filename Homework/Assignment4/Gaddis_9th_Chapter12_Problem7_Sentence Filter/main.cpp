/*
 * File:   main.cpp
 * Author: Evan Wenzel
 * Purpose: Hello World Program
 * Created on July 12, 2021, 4:16 PM
 */

//System Library
#include <iostream>  //Input/Output Library
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    string inFile;
    string outFile;
    string transfer;
    
    fstream dataFile;
    
    //Initialize variables
    cout << "Please input the name of the .txt files for the read for input and output" << endl;
    cin >> inFile;
    cin >> outFile;
    
    dataFile.open(inFile, ios::in);
    
    while(!inFile.eof()) {
        inFile >> transfer;
        for (int i = 0; i < transfer.length(); i++) {
            if (i = 0) {
                transfer[i] = toUpper(transfer[i]);
            };
            else {
                transfer[i] = toLower(transfer[i]);
            };
        }
    }
    
    dataFile.open(outFile, ios::out);
    
    transfer >> outFile;
    //display output
    cout << "Transfer Complete" << endl;
    //Exit stage right or left!
    return 0;
}