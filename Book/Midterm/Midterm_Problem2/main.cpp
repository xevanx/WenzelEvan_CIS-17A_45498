/* 
 * File:   main.cpp
 * Author: Evan
 *
 * Created on July 14, 2021, 5:47 PM
 */
//System Library
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
struct employee {
    string name;
    int hours;
    int payRt;
};
    
//Execution Begins Here!
int main(int argc, char** argv) {
    unsigned short n2Cnvrt;
    int ARY_SIZE;
    int totPay;
    int frstPay;
    int secPay;
    
    //Initialize Variables
    cout << fixed << showpoint << setprecision(2);
    cout << "How many employees need to inputted for gross pay" << endl;
    cin >> ARY_SIZE;
    employee workInfo[ARY_SIZE] = {};
    
    for (int i = 0; i < ARY_SIZE; i ++) {
        //Check for a valid input
        cout << "Please input the name of the employee" << endl;
        cin >> workInfo[i].name;
        cout << "Please input the amount of hours the employee worked" << endl;
        cin >> workInfo[i].hours;
        cout << "Please input the pay rate of the employee" << endl;
        cin >> workInfo[i].payRt;
        
        if (workInfo[i].hours <= 20) {
            totPay = workInfo[i].payRt * workInfo[i].hours;
            cout << "Here 1" << endl;            
        }
        else if(workInfo[i].hours > 20 && workInfo[i].hours <= 40){
            workInfo[i].hours = workInfo[i].hours - 20;
            frstPay = workInfo[i].payRt * 20;
            totPay = frstPay + (workInfo[i].hours * (workInfo[i].payRt * 2));
            cout << "Here 2" << endl;
        }
        else {
            workInfo[i].hours = workInfo[i].hours - 40;
            frstPay = workInfo[i].payRt * 20;
            secPay = 20 * (workInfo[i].payRt * 2);
            totPay = frstPay + secPay + (workInfo[i].hours * (workInfo[i].payRt * 3));
            cout << "Here 3" << endl;
        }
        n2Cnvrt = totPay;
        cout << "Printing out paycheck" << endl << endl;
        cout << "--------------------------------------" << endl << endl;
        cout << "Company" << endl;
        cout << "Address" << endl;
        cout << "Name: " << workInfo[i].name << "Amount: $" << totPay << endl;
        cout << "Amount:";
        
        if(n2Cnvrt>=1 && n2Cnvrt<=9999){
        //Process or map Inputs to Outputs
            //Determine 1000's, 100's, 10's, 1's
            unsigned char n1000s,n100s,n10s,n1s;
            n1000s=n2Cnvrt/1000;   //Shift 3 places to the left
            n100s=n2Cnvrt%1000/100;//Remainder of division of 1000 then shift 2 left
            n10s=n2Cnvrt%100/10;   //Remainder of division of 100 then shift 1 left
            n1s=n2Cnvrt%10;        //Remainder of division by 10

            //Output the number of 1000's into English
            //Using the Switch Statement
            cout<<(n1000s==9?" Nine Thousand":
                   n1000s==8?" Eight Thousand":
                   n1000s==7?" Seven Thousand":
                   n1000s==6?" Six Thousand":
                   n1000s==5?" Five Thousand":
                   n1000s==4?" Four Thousand":
                   n1000s==3?" Three Thousand":
                   n1000s==2?" Two Thousand":
                   n1000s==1?" One Thousand":"");

            //Output the number of 100's
            //Using the Ternary Operator
            cout<<(n100s==9?" Nine Hundred":
                   n100s==8?" Eight Hundred":
                   n100s==7?" Seven hundred":
                   n100s==6?" Six Hundred":
                   n100s==5?" Five Hundred":
                   n100s==4?" Four Hundred":
                   n100s==3?" Three Hundred":
                   n100s==2?" Two Hundred":
                   n100s==1?" One Hundred":"");

            //Output the number of 10's
            //Using Independent If Statements
            cout<<(n10s==9?" Ninety":
                   n10s==8?" Eighty":
                   n10s==7?" Seventy":
                   n10s==6?" Sixty":
                   n10s==5?" Fifty":
                   n10s==4?" Forty":
                   n10s==3?" Thirty":
                   n10s==2?" Twenty":
                   n10s==1?" Ten":"");

            //Output the number of 1's
            //Using Dependent If Statements
            if(n1s==9)cout<<" Nine";
            else if(n1s==8)cout<<" Eight";
            else if(n1s==7)cout<<" Seven";
            else if(n1s==6)cout<<" Six";
            else if(n1s==5)cout<<" Five";
            else if(n1s==4)cout<<" Four";
            else if(n1s==3)cout<<" Three";
            else if(n1s==2)cout<<" Two";
            else if(n1s==1)cout<<" One";

        //The Path to Exit
        }else{
            cout<<"You have problems following Directions"<<endl;
            cout<<"Come back when you decide to comply"<<endl;
        }
        cout << endl;
        cout << "Signature Line:_______________________" << endl << endl;
    };
    
    return 0;
}

