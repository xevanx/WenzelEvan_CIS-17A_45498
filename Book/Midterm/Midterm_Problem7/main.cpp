/*
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on July 15, 2021, 4:38 PM
 */

//System Library
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
struct Prime {
    int prime;
    unsigned char power;
};
struct Primes {
    unsigned char nPrimes;
    Prime *prime;
};

Primes *factor(int);
void prntPrm();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    int input;
    
    cout << "Please input the integer to split into its prime numbers" << endl;
    cin >> input;
    
    *factor(input);
    //display output
    prntPrm();
    //Exit stage right or left!
    return 0;
}

Primes *factor(int input) {    
    Primes primeNum[20];
    primeNum[0].prime = input;
    int j = 1;
    
    while(input%2 == 0){
      input = input / 2;
      primeNum[j].prime = 2;
      j++;
   }
   for(int i = 3; i <= sqrt(input); i = i+2){
      while(input%i == 0){
         input = input / i;
         primeNum[j].Prime = i;
         j++;
      }
   }
   if(input > 2){
       primeNum[j].Prime = input;
   }
    return primeNum;
}

void prntPrm(){
    int i = 0;
    Primes primeNum[20];
    
    cout << "The number " <<  primeNum[i].Prime << " has primes of -> ";
    i++;
    
    for (i; i < 20; i++){
        cout << primeNum[i].Prime << " * ";
    }
}