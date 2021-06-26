/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 25, 2020, 4:59 PM
 * Purpose: Creating a program that converts US Dollars to both Japanese Yen
 *  and Euros
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
    const float YEN_PER_DOLLAR = 98.93;
    const float EURO_PER_DOLLAR = 0.74;
    
    float dollars; //Dollars user wants converted
    float totEuro; //Total Euros converted from dollars
    float totYen;  //Total Yen converted from dollars
    
    //Initialize all known variables
    cout << "Please input the amount of U.S. dollars you wish to convert." << endl;
    cin >> dollars;

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    totEuro = dollars * EURO_PER_DOLLAR; //conversion from dollars to Euro
    totYen = dollars * YEN_PER_DOLLAR;   //Conversion from dollars to Yen
    
    //Display the Inputs/Outputs
    cout << "With $" << dollars << " you would receive " << totEuro << " Euro and "
            << totYen << " yen" << endl;
    
    //Exit stage right
    return 0;
}