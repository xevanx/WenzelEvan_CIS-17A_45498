/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    float num1;
    float num2;
    float num3;
    float num4;
    //Declare variables or constants here
    //7 characters or less
    
    //Initialize or input data here
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout << setw(9) << noshowpoint << setprecision(0) << num1 << setw(10) << showpoint << fixed << setprecision(1) << num1 << setw(10) << setprecision(2) << num1 << endl;
    cout << setw(9) << noshowpoint << setprecision(0) << num2 << setw(10) << showpoint << fixed << setprecision(1) << num2 << setw(10) << setprecision(2) << num2 << endl;
    cout << setw(9) << noshowpoint << setprecision(0) << num3 << setw(10) << showpoint << fixed << setprecision(1) << num3 << setw(10) << setprecision(2) << num3 << endl;
    cout << setw(9) << noshowpoint << setprecision(0) << num4 << setw(10) << showpoint << fixed << setprecision(1) << num4 << setw(10) << setprecision(2) << num4;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}