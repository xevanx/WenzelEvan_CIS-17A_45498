/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
struct division {
    string divName;
    float firstQuar;
    float secQuar;
    float thirQuar;
    float fourQuar;
    float totSale;
    float avgSale;
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    division north = {"North"};
    division west = {"West"};
    division east = {"East"};
    division south = {"South"};
    
    //Declare Variable Data Types and Constants
    cout << fixed << showpoint << setprecision(2);
    //Initialize Variables
    cout << north.divName << endl;
    cout << "Enter first-quarter sales:" << endl;
    cin >> north.firstQuar;
    cout << "Enter second-quarter sales:" << endl;
    cin >> north.secQuar;
    cout << "Enter third-quarter sales:" << endl;
    cin >> north.thirQuar;
    cout << "Enter fourth-quarter sales:" << endl;
    cin >> north.fourQuar;
    north.totSale = north.firstQuar + north.secQuar + north.thirQuar + north.fourQuar;
    cout << "Total Annual sales:$" << north.totSale << endl;
    north.avgSale = north.totSale / 4;
    cout << "Average Quarterly Sales:$" << north.avgSale << endl;
    
    cout << west.divName << endl;
    cout << "Enter first-quarter sales:" << endl;
    cin >> west.firstQuar;
    cout << "Enter second-quarter sales:" << endl;
    cin >> west.secQuar;
    cout << "Enter third-quarter sales:" << endl;
    cin >> west.thirQuar;
    cout << "Enter fourth-quarter sales:" << endl;
    cin >> west.fourQuar;
    west.totSale = west.firstQuar + west.secQuar + west.thirQuar + west.fourQuar;
    cout << "Total Annual sales:$" << west.totSale << endl;
    west.avgSale = west.totSale / 4;
    cout << "Average Quarterly Sales:$" << west.avgSale << endl;
    
    cout << east.divName << endl;
    cout << "Enter first-quarter sales:" << endl;
    cin >> east.firstQuar;
    cout << "Enter second-quarter sales:" << endl;
    cin >> east.secQuar;
    cout << "Enter third-quarter sales:" << endl;
    cin >> east.thirQuar;
    cout << "Enter fourth-quarter sales:" << endl;
    cin >> east.fourQuar;
    east.totSale = east.firstQuar + east.secQuar + east.thirQuar + east.fourQuar;
    cout << "Total Annual sales:$" << east.totSale << endl;
    east.avgSale = east.totSale / 4;
    cout << "Average Quarterly Sales:$" << east.avgSale << endl;
    
    cout << south.divName << endl;
    cout << "Enter first-quarter sales:" << endl;
    cin >> south.firstQuar;
    cout << "Enter second-quarter sales:" << endl;
    cin >> south.secQuar;
    cout << "Enter third-quarter sales:" << endl;
    cin >> south.thirQuar;
    cout << "Enter fourth-quarter sales:" << endl;
    cin >> south.fourQuar;
    south.totSale = south.firstQuar + south.secQuar + south.thirQuar + south.fourQuar;
    cout << "Total Annual sales:$" << south.totSale << endl;
    south.avgSale = south.totSale / 4;
    cout << "Average Quarterly Sales:$" << south.avgSale;
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}