#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct machine{
    string name;
    float cost;
    int amt;
};

int main(){
	//your code here
	const int NUM_DRINKS = 4;
	float money = 0;
	float input = 0;
	float change = 0;
	string choice = "";
	
	machine drinks[NUM_DRINKS];
	
	drinks[0].name = "Cola";
	drinks[0].cost = 0.75;
	drinks[0].amt = 20;
	
	drinks[1].name = "Root Beer";
	drinks[1].cost = 0.75;
	drinks[1].amt = 20;
	
	drinks[2].name = "Lemon-Lime";
	drinks[2].cost = 0.75;
	drinks[2].amt = 20;
	
	drinks[3].name = "Grape Soda";
	drinks[3].cost = 0.80;
	drinks[3].amt = 20;
	
	drinks[4].name = "Cream Soda";
	drinks[4].cost = 0.80;
	drinks[4].amt = 20;
	
	cout << fixed << showpoint << setprecision(2);
	cin >> choice;
	
	do {
    	cout << "Cola       75  " << drinks[0].amt << endl;
    	cout << "Root Beer  75  " << drinks[1].amt << endl;
    	cout << "Lemon-Lime 75  " << drinks[2].amt << endl;
    	cout << "Grape Soda 80  " << drinks[3].amt << endl;
    	cout << "Cream Soda 80  " << drinks[4].amt << endl;
    	
    	cin >> input;
    	
    	if (choice == "Cola") {
    	    drinks[0].amt = drinks[0].amt - 1;
    	    change = input - 0.75;
    	    money = money + 0.75;
    	}
    	else if (choice == "Root Beer") {
    	    drinks[1].amt = drinks[1].amt - 1;
    	    change = input - 0.75;
    	    money = money + 0.75;
    	}
    	else if (choice == "Lemon-Lime") {
    	    drinks[2].amt = drinks[2].amt - 1;
    	    change = input - 0.75;
    	    money = money + 0.75;
    	}
    	else if (choice == "Grape Soda") {
    	    drinks[3].amt = drinks[3].amt - 1;
    	    change = input - 0.80;
    	    money = money + 0.80;
    	}
    	else if (choice == "Cream Soda") {
    	    drinks[4].amt = drinks[4].amt - 1;
    	    change = input - 0.80;
    	    money = money + 0.80;
    	}
    	
    	cout << "Quit" << endl;
    	cin >> choice;
    	
    	if (choice == "Quit") {
    	    cout << money << endl;
    	}
    	else {
    	    cout << change << endl;
    	}
	} while (choice != "Quit");
	
	return 0;
}