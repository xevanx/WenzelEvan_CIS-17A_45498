/*
 * File:   main.cpp
 * Author: Evan Wenzel
 * Purpose: Program to read 24 lines at a time of a file
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    int maxLines = 24;
    string confirm;
    string senten;
    fstream testFile;
    
    testFile.open("testFile.txt", ios::in);
    
    for(int i = 0; i <= maxLines; i++) {
        for (int j = 0; 0 < 24; j++){
            getline(testFile, senten);
            cout << senten << endl;
            cin >> confirm;
        }
    }
    cout << "Entire File has been displayed" << endl;
    
    //Exit stage right or left!
    return 0;
}