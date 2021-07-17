/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
struct budget{
    float house;
    float utils;
    float expen;
    float trans;
    float food;
    float medic;
    float insur;
    float enter;
    float cloth;
    float misc;
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    //Declare Variable Data Types and Constants
    float total = 1420.00;
    float monthTot;
    float sub;
    budget month1 = {};
    
    cout << fixed << showpoint << setprecision(2);
    //Initialize Variables
    cout << "Enter housing cost for the month:$" << endl;
    cin >> month1.house;
    cout << "Enter utilities cost for the month:$" << endl;
    cin >> month1.utils;
    cout << "Enter household expenses cost for the month:$" << endl;
    cin >> month1.expen;
    cout << "Enter transportation cost for the month:$" << endl;
    cin >> month1.trans;
    cout << "Enter food cost for the month:$" << endl;
    cin >> month1.food;
    cout << "Enter medical cost for the month:$" << endl;
    cin >> month1.medic;
    cout << "Enter insurance cost for the month:$" << endl;
    cin >> month1.insur;
    cout << "Enter entertainment cost for the month:$" << endl;
    cin >> month1.enter;
    cout << "Enter clothing cost for the month:$" << endl;
    cin >> month1.cloth;
    cout << "Enter miscellaneous cost for the month:$" << endl;
    cin >> month1.misc;
    //Process or map Inputs to Outputs
    if (month1.house < 500) {
        cout << "Housing Under" << endl;
    }
    else if (month1.house > 500) {
        cout << "Housing Over" << endl;
    }
    else {
        cout << "Housing Even" << endl;
    }
    
    if (month1.utils < 150) {
        cout << "Utilities Under" << endl;
    }
    else if (month1.utils > 150) {
        cout << "Utilities Over" << endl;
    }
    else {
        cout << "Utilities Even" << endl;
    }
    
    if (month1.expen < 65) {
        cout << "Household Expenses Under" << endl;
    }
    else if (month1.expen > 65) {
        cout << "Household Expenses Over" << endl;
    }
    else {
        cout << "Household Expenses Even" << endl;
    }
    
    if (month1.trans < 50) {
        cout << "Transportation Under" << endl;
    }
    else if (month1.trans > 50) {
        cout << "Transportation Over" << endl;
    }
    else {
        cout << "Transportation Even" << endl;
    }
    
    if (month1.food < 250) {
        cout << "Food Under" << endl;
    }
    else if (month1.food > 250) {
        cout << "Food Over" << endl;
    }
    else {
        cout << "Food Even" << endl;
    }
    
    if (month1.medic < 30) {
        cout << "Medical Under" << endl;
    }
    else if (month1.medic > 30) {
        cout << "Medical Over" << endl;
    }
    else {
        cout << "Medical Even" << endl;
    }
    
    if (month1.insur < 100) {
        cout << "Insurance Under" << endl;
    }
    else if (month1.insur > 100) {
        cout << "Insurance Over" << endl;
    }
    else {
        cout << "Insurance Even" << endl;
    }
    
    if (month1.enter < 150) {
        cout << "Entertainment Under" << endl;
    }
    else if (month1.enter > 150) {
        cout << "Entertainment Over" << endl;
    }
    else {
        cout << "Entertainment Even" << endl;
    }
    
    if (month1.cloth < 75) {
        cout << "Clothing Under" << endl;
    }
    else if (month1.cloth > 75) {
        cout << "Clothing Over" << endl;
    }
    else {
        cout << "Clothing Even" << endl;
    }
    
    if (month1.misc < 50) {
        cout << "Miscellaneous Under" << endl;
    }
    else if (month1.misc > 50) {
        cout << "Miscellaneous Over" << endl;
    }
    else {
        cout << "Miscellaneous Even" << endl;
    }
    
    monthTot = month1.house + month1.utils + month1.expen + month1.trans + month1.food + month1.medic + month1.insur + month1.enter + month1.cloth + month1.misc;
    
    //Display Outputs
    if (monthTot < total) {
        sub = total - monthTot;
        cout << "You were $" << sub << " under budget" << endl;
    }
    else if (monthTot > total) {
        sub = monthTot - total;
        cout << "You were $" << sub << " over budget" << endl;
    }

    //Exit stage right!
    return 0;
}