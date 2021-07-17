#include <iostream>
#include <string>

using namespace std;

struct MovieData {
    string title;
    string direct;
    int year;
    int runTime;
};

int main(){
	//your code here
	int movieAmt;
	
	cout << "This program reviews structures" << endl;
	cout << "Input how many movies, the Title of the Movie, Director, Year Released, and the Running Time in (minutes)." << endl;
	cin >> movieAmt;
	
	
	MovieData movies[movieAmt];
	
	for (int i = 1; i < movieAmt; i++) {
	    cin >> movies[i].title; 
	    cin >> movies[i].direct;
	    cin >> movies[i].year;
	    cin >> movies[i].runTime;
	}
	for (int i = 1; i < movieAmt; i++) {
	    cout << endl;
	    cout << "Title:     " << movies[i].title << endl;
	    cout << "Director:  " << movies[i].direct << endl;
	    cout << "Year:      " << movies[i].year << endl;
	    cout << "Length:    " << movies[i].runTime << endl;
	}
	return 0;
}