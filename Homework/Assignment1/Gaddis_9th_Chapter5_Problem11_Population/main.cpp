/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 25, 2020, 6:05 PM
 * Purpose: Creating a program to predict the total growth of a population
 *      over time
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //CMath Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int popStart;  //Population at the start
    int days;      //Days of growth
    int day;       //Current Day
    int newDay;    //New day's growth
    int lastDay;   //Last day's growth
    float perGrow; //Percentage of daily growth
    float wholePer;//Percentage converted to whole number
    
    //Initialize all known variables
    cout << "Please input the starting number of the population *No less than 2*" << endl;
    cin >> popStart;
    
    if (popStart <= 2) {
        cout << "No number lower than 2 for population" << endl;
        return 1;
    }
    
    cout << "Please input the percentage growth of the population daily *No negatives*" << endl;
    cin >> perGrow;
    
    if (perGrow <= 0) {
        cout << "No negative percentages for population growth" << endl;
        return 1;
    }
    
    cout << "Please input the number of days for growth *No less that 1 day*" << endl;
    cin >> days;
    
    if (days < 1) {
        cout << "No fewer days than 1" << endl;
        return 1;
    }

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    wholePer = perGrow / 100;
    cout << wholePer << endl;
    
    //Display the Inputs/Outputs
    for (int i = 0; i < days; i++) {
        if (i == 0) {
            day = i + 1;
            newDay = (popStart * wholePer) + popStart;
            cout << "Day " << day << ": Population growth of " << newDay << endl;
            lastDay = newDay;
            cout << lastDay << endl;
        }
        else {
            day = i + 1;
            newDay = (lastDay * wholePer) + lastDay;
            cout << newDay << endl;
            cout << "Day " << day << ": Population growth of " << newDay << endl;
            lastDay = newDay;
        }
    }
    
    //Exit stage right
    return 0;
}