/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Driver program to test out the statistics problem.
 */

//Libraries
#include <iostream>//I/O
#include <cmath>
using namespace std;

//User Libraries
#include "Array.h"
#include "Stats.h"

//No Global Constants

//Function Prototypes I supply
Array *fillAry(int,int);        //Fill an array and put into a structure
void prntAry(const Array *,int);//Print the array 
int *copy(const int *,int);     //Copy the array
void mrkSort(int *,int);        //Sort an array
void prtStat(const Stats *);    //Print the structure
void rcvrMem(Array *);          //Recover memory from the Array Structure
void rcvrMem(Stats *);          //Recover memory from Statistics Structure

//Functions you are to supply
Stats *stat(const Array *);     //Find & store mean, median, & modes in structure

//Execution begins here
int main(int argc, char*argv[]) {
    //Declare variables
    int arySize;//Array Size
    int modNum; //Number to control the modes (digits 0 to 9 allowed)
    Array *array;
    
    //Input the size and mod number
    cout<<"This program develops an array to be analyzed"<<endl;
    cout<<"Array size from mod number to 100"<<endl;
    cout<<"Mod number from 2 to 10"<<endl;
    cout<<"Input the Array Size and the mod number to be used."<<endl;
    cin>>arySize>>modNum;
    cout<<endl<<endl;
    
    //Fill the array
    array=fillAry(arySize,modNum);
    
    //Print the initial array
    cout<<"Original Array before sorting"<<endl;
    prntAry(array,10);
    
    //Sort the array
    mrkSort(array->data,array->size);
    cout<<"Sorted Array to be utilize for the stat function"<<endl;
    prntAry(array,10);
    
    //Calculate some of the statistics
    Stats *stats=stat(array);
    
    //Print the statistics
    prtStat(stats);
    
    //Recover allocated memory
    rcvrMem(array);
    rcvrMem(stats);
    
    //Exit stage right
    return 0;
}

int *copy(const int *a,int n){
    //Declare and allocate an array
    //that is a c
    int *b=new int[n];
    //Fill
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    //Return the copy
    return b;
}

void prtStat(const Stats *ary){
    cout<<endl;
    cout<<"The average of the array = "<<ary->avg<<endl;
    cout<<"The median of the array  = "<<ary->median<<endl;
    cout<<"The number of modes      = "<<
            ary->mode->size<<endl;
    cout<<"The max Frequency        = "<<
            ary->modFreq<<endl;
    if(ary->mode->size==0){
        cout<<"The mode set             = {null}"<<endl;
        return;
    }
    cout<<"The mode set             = {";
    for(int i=0;i<ary->mode->size-1;i++){
        cout<<ary->mode->data[i]<<",";
    }
    cout<<ary->mode->data[ary->mode->size-1]<<"}"<<endl;
}

void mrkSort(int *array,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

void rcvrMem(Stats *stats){
    rcvrMem(stats->mode);
    delete stats;
}

void rcvrMem(Array *array){
    delete []array->data;
    delete array;
}

void prntAry(const Array *array,int perLine){
    //Output the array
    for(int i=0;i<array->size;i++){
        cout<<array->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n, int modNum){
    //Allocate memory
    Array *array=new Array;
    array->size=n;
    array->data=new int[array->size];
    
    //Fill the array with mod numbers
    for(int i=0;i<n;i++){
        array->data[i]=i%modNum;
    }
    
    //Exit function
    return array;
}

Stats *stat(const Array *array){
    Stats *stats=new Stats;
    stats->mode=new Array;
        
    float mean;
    int median;
    int mode = 1;
    int sum = 0;
    int i = 0;
    int digArray[] = {0,0,0,0,0,0,0,0,0,0};
    int largest;
    int temp;
    int modeSet[] = {0,0,0,0,0,0,0,0,0,0};
    
    for(i; i < array->size;i++){
        sum = sum + array->data[i];
    }
    
    mean = sum/i;
    median = mean;
    
    for(int j = 0; j < array->size; j++){
        if(array->data[j] = 0){
            temp = digArray[0] + 1;
            digArray[0] = temp;
        }
        else if(array->data[j] = 1){
            temp = digArray[1] + 1;
            digArray[1] = temp;
        }
        else if(array->data[j] = 2){
            temp = digArray[2] + 1;
            digArray[2] = temp;
        }
        else if(array->data[j] = 3){
            temp = digArray[3] + 1;
            digArray[3] = temp;
        }
        else if(array->data[j] = 4){
            temp = digArray[4] + 1;
            digArray[4] = temp;
        }
        else if(array->data[j] = 5){
            temp = digArray[5] + 1;
            digArray[5] = temp;
        }
        else if(array->data[j] = 6){
            temp = digArray[6] + 1;
            digArray[6] = temp;
        }
        else if(array->data[j] = 7){
            temp = digArray[7] + 1;
            digArray[7] = temp;
        }
        else if(array->data[j] = 8){
            temp = digArray[8] + 1;
            digArray[8] = temp;
        }
        else if(array->data[j] = 9){
            temp = digArray[9] + 1;
            digArray[9] = temp;
        }
    }

//    largest = digArray[0];
//    stats->mode->data[0] = 0;
//    for(int x = 1; x < 10; x++){
//        if(digArray[x] = largest){
//            mode++;
//            stats->mode->data[x] = x;
//        }
//        else if(digArray[x] > largest){
//            largest = digArray[x];
//            mode = 1;
//            stats->mode=new Array;
//            stats->mode->data[0] = x;
//        }
//    }

    //Non-working stub to be completed by the student
    cout<<endl<<"Stat function to be completed by the student"<<endl;
    stats->avg = mean;
    stats->mode->size=10;
    int nModes=0;
    if(nModes!=0)stats->mode->data=new int[nModes];
    stats->modFreq=mode;
    stats->median=median;
    return stats;
}