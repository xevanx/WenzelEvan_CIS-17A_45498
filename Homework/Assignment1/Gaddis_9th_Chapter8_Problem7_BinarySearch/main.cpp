/* 
 * File:   main.cpp
 * Author: Evan Wenzel
 * Created on June 26, 2020, 2:52 PM
 * Purpose: Creating a Hello World Program
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void selectionSort(string[], int);
void swap(string &, string &);
void display(string[], int);
int binarySearch(string[], int, string);

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    const int nameNum = 20;
    string names[nameNum] = {"Collins, Bill", "Smith, Bart", "Allen Jim",
                             "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                             "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                             "Looney, Joe", "Wolfe, Bill", "Rutherford, Greg",
                             "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                             "Pike, Gordon", "Holland, Beth"};
    string searchName;
    
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    selectionSort(names, nameNum);
    display(names, nameNum);
    
    cout << "Choose a name: ";
    cin >> searchName;
    
    int position = binarySearch(names, nameNum, searchName);
    
    //Display the Inputs/Outputs
    if (position != -1) {
        cout << names[position] << " is in the list" << endl;
    }
    else {
        cout << searchName << " is not in the list" << endl;
    }
    
    //Exit stage right
    return 0;
}

void selectionSort(string array[], int ARRAY_SIZE) {
    int min_index;
    string min_value;
    
    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++) {
        min_index = start_index;
        min_value = array[start_index];
        
        for (int index = start_index + 1; index < ARRAY_SIZE; index++) {
            if (array[index] < min_value) {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void display(string array[], int ARRAY_SIZE, string prompt) {
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << array[i] << endl;
    }
    cout << endl;
}

int binarySearch(string array[], int array_size, string user_name) {
    int first = 0, last = array_size - 1, middle, position = -1;
    bool found = false;
    
    while (!found && first <= last) {
        middle = (first + last) / 2;
        
        if (array[middle] == user_name) {
            position = middle;
            found = true;
        }
        else if (array[middle] > user_name) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    return position;
}