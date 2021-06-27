/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 26, 2020, 1:10 PM
 * Purpose: Creating a program that converts Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //CMath Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int celcius;
    int fahren;
    
    //Initialize all known variables
    cout << "Please input a temperature to convert to Celsius" << endl;
    cin >> fahren;

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    celcius = (0.556) * fahren - 32;
    
    //Display the Inputs/Outputs
    cout << fahren << " degrees in Fahrenheit is equal to " << celcius << " degrees Celcius" << endl;
    
    for (int i = 0; i < 20; i++) {
        celcius = 0.556 * i - 32;
        cout << i << " degrees Fahrenheit = " << celcius << " degrees Celcius" << endl;
    };
    
    //Exit stage right
    return 0;
}