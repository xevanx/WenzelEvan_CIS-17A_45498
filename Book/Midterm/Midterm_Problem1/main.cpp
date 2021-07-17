/* 
 * File:   main.cpp
 * Author: Evan
 * Purpose: 
 * Created on July 14, 2021, 2:30 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
struct customer {
    int account;
    string name;
    string address;
    float begBala;
    float totWith;
    float totDepo;
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string cont;
    float checks;
    float deposit;
    float newBala;
    
    customer bankInfo = {};
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Welcome to your bank account calculator" << endl;
    
    do {
        cout << "Please input your 5-digit Account Number" << endl;
        cin >> bankInfo.account;
    } while(bankInfo.account <= 9999 || bankInfo.account > 99999);
    
    cin.ignore(1,'\n');
    
    cout << "Please input your full name" << endl;
    getline(cin, bankInfo.name);
    cout << bankInfo.name << endl;
    
    cout << "Please input your address" << endl;
    getline(cin, bankInfo.address);
    cout << bankInfo.address << endl;
    
    cout << "Please input your balance at the beginning of the month" << endl;
    cin >> bankInfo.begBala;
    cout << bankInfo.begBala << endl;
    
    do {
        cout << "Please input checks you've written this month" << endl;
        cin >> checks;
        
        bankInfo.totWith = bankInfo.totWith + checks;
        
        cout << "Current total of checks is $" << bankInfo.totWith << endl;
        
        cout << "If you want to add another check, enter yes" << endl;
        cin >> cont;
    } while (cont == "yes" || cont == "YES");
    
    do {
        cout << "Please input deposits you've made this month" << endl;
        cin >> deposit;
        
        bankInfo.totDepo = bankInfo.totDepo + deposit;
        
        cout << "Current total of deposits is $" << bankInfo.totDepo << endl;
        
        cout << "If you want to add another deposit, enter yes" << endl;
        cin >> cont;
    } while (cont == "yes" || cont == "YES");
    
    newBala = bankInfo.begBala + bankInfo.totDepo - bankInfo.totWith;
    cout << "New Balance: $" << newBala << endl;
    if (newBala < 0) {
        newBala = newBala - 50;
        cout << "Your account is currently overdrawn and $50 fee will be "
             << "accessed" << endl;
        cout << "Your balance after the fee is: $" << newBala << endl;
    };
    cout << endl;
    cout << "Account Information" << endl;
    cout << "Account Number:     " << bankInfo.account << endl;
    cout << "User's Name:        " << bankInfo.name << endl;
    cout << "User's Address:     " << bankInfo.address <<endl;
    cout << "Beginning Balance:  $" << bankInfo.begBala << endl;
    cout << "Total Withdraw:     $-" << bankInfo.totWith << endl;
    cout << "Total Deposit:      $" << bankInfo.totDepo << endl;
    cout << "Current Balance:    $" << newBala << endl;
    //Exit stage right!
    return 0;
}