/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 25, 2020, 5:25 PM
 * Purpose: Creating a program that calculates the amount of days in a month
 *  based on what month it is and by determining if it's a leap year
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
    const int January = 31, February = 28, March = 30, April = 30, May = 31;
    const int June = 30, July = 31, August = 31, September = 30;
    const int October = 31, November = 30, December = 31;
    int month;
    int year;
    int totDays;
    bool leap;
    
    //Initialize all known variables
    cout << "Please input the what month it is by using numbers 1-12" << endl;
    cin >> month;
    
    if (month < 0 || month > 12) {             //Checking if inputted month is valid
        cout << "INVALID MONTH NUMBER" << endl;
        return 1;
    }
    
    cout << "Please input the year this month is in" << endl;
    cin >> year;
    
//    if (year / 400 || year / 4) { //Checking for leap year
//        leap = true;
//    }
//    else {
//        leap = false;
//    };    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    if (month == 2 && leap == true) {  //An if/else list to provide the number of days
        totDays = February + 1;
    }
    else if (month == 2) {
        totDays = February;
    }
    else if (month == 1) {
        totDays = January;
    }
    else if (month == 3) {
        totDays = March;
    }
    else if (month == 4) {
        totDays = April;
    }
    else if (month == 5) {
        totDays = May;
    }
    else if (month == 6) {
        totDays = June;
    }
    else if (month == 7) {
        totDays = July;
    }
    else if (month == 8) {
        totDays = August;
    }
    else if (month == 9) {
        totDays = September;
    }
    else if (month == 10) {
        totDays = October;
    }
    else if (month == 11) {
        totDays = November;
    }
    else if (month == 12) {
        totDays = December;
    }
    else {
        cout << "Please enter a valid number" << endl;
        return 1;
    }
    
    //Display the Inputs/Outputs
    cout << "That month has " << totDays << " days in it" << endl;
    
    //Exit stage right
    return 0;
}