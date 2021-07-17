/*
 * File:   main.cpp
 * Author: Evan Wenzel
 * 
 */

//System Library
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    double fact = 1; // variable tested with every data type for factorials
    int res = 1;
    
    for (res; res < 180; res++) {
        for (int n = 1; n <= res; n++) {
                fact = fact * n;
        }
        cout << "This factorial of " << res << " is " << fact << endl << endl;
        fact = 1;
    }
    
    cout << fact << endl;
    
//    short = 17 with a factorial of -32768
//    signed short = 17 with a factorial of -32768
//    unsigned short = 17 with a factorial of 32768
//    short int = 17 with a factorial of -32768
//    unsigned short int = 17 with a factorial of 32768
//    int = 33 with a factorial of -2147483648
//    signed int = 33 with a factorial of -2147483648
//    unsigned int = 33 with a factorial of 2147483648
//    long int = 65 with a factorial of -9223372036854775808
//    unsigned long int = 65 with a factorial of 9223372036854775808
//    long long int = 65 with a factorial of -9223372036854775808
//    unsigned long long int = 65 with a factorial of 9223372036854775808
//    long = 65 with a factorial of -9223372036854775808
//    signed long = 65 with a factorial of -9223372036854775808
//    unsigned long = 65 with a factorial of 9223372036854775808
//    float = 34 with a factorial of 2.95233e38
//    double = 170 with a factorial of 7.25742e306
//    long double = 1754 with a factorial of 1.97926e4930
    //Exit stage right or left!
    return 0;
}