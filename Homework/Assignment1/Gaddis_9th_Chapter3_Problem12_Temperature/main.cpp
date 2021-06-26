/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 25, 2020, 4:34 PM
 * Purpose: Creating a program that converts Celsius to Fahrenheit.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Cmath Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int celsius;
    int fahren;
    
    //Initialize all known variables
    cout << "Please input the temperature in Celsius" << endl;
    cin >> celsius;

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    fahren = (1.8 * celsius) + 32;
    
    //Display the Inputs/Outputs
    cout << celsius << " degrees Celsius equals " << 
            fahren << " degrees Fahrenheit."<< endl;
    //Exit stage right
    return 0;
}