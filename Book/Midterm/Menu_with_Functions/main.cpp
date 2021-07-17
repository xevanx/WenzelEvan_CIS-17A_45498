/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  Menu using Functions,
 *           extend for midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();

struct customer {
    int account;
    string name;
    string address;
    float begBala;
    float totWith;
    float totDepo;
};

struct employee {
    string name;
    int hours;
    int payRt;
};

struct Prime {
    unsigned int prime;
    unsigned char power;
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            case '6':{prblm6();break;}
            case '7':{prblm7();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;   
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl; 
    cout<<"Type 6 for Problem 6"<<endl; 
    cout<<"Type 7 for Problem 7"<<endl<<endl; 
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    //Declare Variables
    string cont;
    float checks;
    float deposit;
    float newBala;
    
    customer bankInfo = {};
    
    cout<<"Problem 1"<<endl;
    
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
    //Exit Function
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
    cout<<"Problem 2"<<endl;
    
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
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    cout<<"Problem 3"<<endl;
    cout << "The program is located in the StatStructureStub_V1 folder" << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    cout<<"problem 4"<<endl;
    
    int decide;
    int inputInt;
    int firstDig;
    int secDig;
    int thirDig;
    int fourDig;
    int tempDig;
    
    cout << "Input 1 to encrypt an integer, input 2 to decrypt an integer" << endl;
    cin >> decide;
    
    if (decide == 1){
        cout << "Please enter 4 digit integer to be encrypted" << endl;
        cin >> inputInt;

        firstDig = inputInt/1000;
        secDig = inputInt%1000/100;
        thirDig = inputInt%100/10;
        fourDig = inputInt%10;

        do {
            if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7 || inputInt > 9999) {
                cout << "Incorrect digits inputted, only input digits between 0-7" << endl;
                cin >> inputInt;
                firstDig = inputInt/1000;
                secDig = inputInt%1000/100;
                thirDig = inputInt%100/10;
                fourDig = inputInt%10;
            }
        } while(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7);

        firstDig = (firstDig+6)%8;
        secDig = (secDig+6)%8;
        thirDig = (thirDig+6)%8;
        fourDig = (fourDig+6)%8;
        cout << firstDig << secDig << thirDig << fourDig << endl;

        tempDig = firstDig;
        firstDig = thirDig;
        thirDig = tempDig;
        tempDig = secDig;
        secDig = fourDig;
        fourDig = tempDig;

        if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7) {
            cout << "Error encrypting the integer" << endl;
            
        }
        else {
            cout << "Encrypted Integer" << endl;
            cout << firstDig << secDig << thirDig << fourDig << endl;
        }
    }
    else if (decide == 2){
        cout << "Please enter 4 digit integer to be decrypted" << endl;
        cin >> inputInt;

        firstDig = inputInt/1000;
        secDig = inputInt%1000/100;
        thirDig = inputInt%100/10;
        fourDig = inputInt%10;

        do {
            if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7 || inputInt > 9999) {
                cout << "Incorrect digits inputted, only input digits between 0-7" << endl;
                cin >> inputInt;
                firstDig = inputInt/1000;
                secDig = inputInt%1000/100;
                thirDig = inputInt%100/10;
                fourDig = inputInt%10;
            }
        } while(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7);

        tempDig = firstDig;
        firstDig = thirDig;
        thirDig = tempDig;
        tempDig = secDig;
        secDig = fourDig;
        fourDig = tempDig;
        cout << firstDig << secDig << thirDig << fourDig << endl;
                
        firstDig = (firstDig-6+8)%8;
        secDig = (secDig-6+8)%8;
        thirDig = (thirDig-6+8)%8;
        fourDig = (fourDig-6+8)%8;
        
        if(firstDig > 7 || secDig > 7 || thirDig > 7 || fourDig > 7) {
            cout << "Error encrypting the integer" << endl;
        }
        else {
            cout << "Decrypted Integer" << endl;
            cout << firstDig << secDig << thirDig << fourDig << endl;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 5
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    cout<<"problem 5"<<endl;
    
    cout << "The largest factorial gotten with a data type is long double with"
         << " a starting factorial of 1,754 and a total of 1.97926e4930" << endl;
    cout << "The second largest is double with a start of 170 and a factorial"
         << "of 7.25742e306" << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 6
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm6(){
    cout<<"problem 6"<<endl;
    
    cout << "Base10: 51.1875 | Base2: 110011.0011 | Base8: 63.14 | Base16: 33.3" << endl;
    cout << "4 Byte Float Specification & 8 Digit Hex" << endl;
    cout << "01100110|01100000|00000000|00000111" << endl;
    cout << " 6   6    6   0    0   0    0   6" << endl << endl;
    
    cout << "Base10: 3.19921875 | Base2: 11.00110011 | Base8: 3.146 | Base16: 3.33" << endl;
    cout << "4 Byte Float Specification & 8 Digit Hex" << endl;
    cout << "01100110|01100000|00000000|00000011" << endl;
    cout << " 6   6    6   0    0   0    0   3" << endl << endl;
    
    cout << "Base10: 0.2 | Base2: 0.0011(0011)... | Base8: 0.(1463)... | Base16: 0.(333)..." << endl;
    cout << "4 Byte Float Specification & 8 Digit Hex" << endl;
    cout << "01100110|01100110|01100110|11111110" << endl;
    cout << " 6   6    6   6    6   6    F   E" << endl << endl;
    
    cout << "Base10: -51.1875 | Base2: -110011.0011 | Base8: -63.14 | Base16: -33.3" << endl;
    cout << "4 Byte Float Specification & 8 Digit Hex" << endl;
    cout << "11100110|01100000|00000000|00000110" << endl;
    cout << " E   6    6   0    0   0    0   6" << endl << endl;
    
    cout << "Base10: -3.19921875 | Base2: -11.00110011 | Base8: -3.146 | Base16: -3.33" << endl;
    cout << "4 Byte Float Specification & 8 Digit Hex" << endl;
    cout << "11100110|01100000|00000000|00000010" << endl;
    cout << " 6   6    6   0    0   0    0   2" << endl << endl;
    
    cout << "Base10: -0.2 | Base2: -0.0011(0011)... | Base8: -0.(1463)... | Base16: -0.(333)..." << endl;
    cout << "4 Byte Float Specification & 8 Digit Hex" << endl;
    cout << "11100110|01100110|01100110|11111110" << endl;
    cout << " E   6    6   6    6   6    F   E" << endl << endl;
    
    cout << " 6   9    9   9    9   9    0   2" << endl;
    cout << "01101001|10011001|10011001|00000010" << endl;
    cout << "Base2: 11.0(1001)... | Base 10: 3.28125" << endl << endl;
    
    cout << " 6   9    9   9    9   9    0   3" << endl;
    cout << "01101001|10011001|10011001|00000011" << endl;
    cout << "Base2: 110.(1001)... | Base 10: 6.59765625" << endl << endl;
    
    cout << " 9   6    6   6    6   7    F   F" << endl;
    cout << "10010110|01100110|01100111|11111111" << endl;
    cout << "Base2: 0.0101100110011001100111 | Base 10: 0.350000143114746094" << endl << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 7
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm7(){
    cout<<"problem 7"<<endl;
    
    unsigned int input;
    unsigned int y = 0;
    unsigned int j = 1;
    
    Prime primeNum[20];
    
    cout << "Please input the integer to split into its prime numbers" << endl;
    cin >> input;
    
    primeNum[0].prime = input;
    
    while(input%2 == 0){
      input = input / 2;
      primeNum[j].prime = 2;
      j++;
    }
    for(unsigned int i = 3; i <= sqrt(input); i = i+2){
       while(input%i == 0){
          input = input / i;
          primeNum[j].prime = i;
          j++;
       }
    }
    if(input > 2){
        primeNum[j].prime = input;
    }

    cout << "The number " <<  primeNum[y].prime << " has primes of -> ";
    y++;

    for (y; y < j; y++){
        cout << primeNum[y].prime << " * ";
    }
}