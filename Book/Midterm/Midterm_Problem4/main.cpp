/*
 * File:   main.cpp
 * Author: Evan Wenzel
 *  
 */

//System Library
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    int decide;
    int inputInt;
    int firstDig;
    int secDig;
    int thirDig;
    int fourDig;
    int tempDig;
    
    cout << "Input 1 to encrypt an integer, input 2 to decrypt an integer" << endl;
    cin >> decide;
    
    if (decide == 1){
        cout << "Please enter 4 digit integer to be encrypted" << endl;
        cin >> inputInt;

        firstDig = inputInt/1000;
        secDig = inputInt%1000/100;
        thirDig = inputInt%100/10;
        fourDig = inputInt%10;

        do {
            if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7 || inputInt > 9999) {
                cout << "Incorrect digits inputted, only input digits between 0-7" << endl;
                cin >> inputInt;
                firstDig = inputInt/1000;
                secDig = inputInt%1000/100;
                thirDig = inputInt%100/10;
                fourDig = inputInt%10;
            }
        } while(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7);

        firstDig = (firstDig+6)%8;
        secDig = (secDig+6)%8;
        thirDig = (thirDig+6)%8;
        fourDig = (fourDig+6)%8;
        cout << firstDig << secDig << thirDig << fourDig << endl;

        tempDig = firstDig;
        firstDig = thirDig;
        thirDig = tempDig;
        tempDig = secDig;
        secDig = fourDig;
        fourDig = tempDig;

        if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7) {
            cout << "Error encrypting the integer" << endl;
            return 1;
        }

        cout << "Encrypted Integer" << endl;
        cout << firstDig << secDig << thirDig << fourDig << endl;
    }
    else if (decide == 2){
        cout << "Please enter 4 digit integer to be decrypted" << endl;
        cin >> inputInt;

        firstDig = inputInt/1000;
        secDig = inputInt%1000/100;
        thirDig = inputInt%100/10;
        fourDig = inputInt%10;

        do {
            if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7 || inputInt > 9999) {
                cout << "Incorrect digits inputted, only input digits between 0-7" << endl;
                cin >> inputInt;
                firstDig = inputInt/1000;
                secDig = inputInt%1000/100;
                thirDig = inputInt%100/10;
                fourDig = inputInt%10;
            }
        } while(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7);

        tempDig = firstDig;
        firstDig = thirDig;
        thirDig = tempDig;
        tempDig = secDig;
        secDig = fourDig;
        fourDig = tempDig;
        cout << firstDig << secDig << thirDig << fourDig << endl;
                
        firstDig = (firstDig-6+8)%8;
        secDig = (secDig-6+8)%8;
        thirDig = (thirDig-6+8)%8;
        fourDig = (fourDig-6+8)%8;
        
        if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7) {
            cout << "Error encrypting the integer" << endl;
            return 1;
        }
        
        cout << "Decrypted Integer" << endl;
        cout << firstDig << secDig << thirDig << fourDig << endl;
    }
    //Exit stage right or left!
    return 0;
}