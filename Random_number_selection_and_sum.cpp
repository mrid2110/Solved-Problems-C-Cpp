/*
PROBLEM:
Read 100 numbers from file and stores in array and randomly selects 10 elements from that array and
sum them up and print the index of selected elements and sum.
*/

/*
Output Issues:
It should be showing 10 index numbers but somehow its showing only 2 index numbers.
*/



#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int file[200], arr[100], indexVal[10]; //in arr[100] all the 100 numbers will be stored from file[200]
    int randIndex = rand() % 100; //declaring a variable to select random index of the array
    int sum = 0;

    //storing 100 numbers in arr[100]
    for(int i=0; i<100; i++)
    {
        file[i] = arr[i];
    }

    //randomly selecting 10 numbers and storing the index values
    for(int i=0; i<10; i++)
    {
        arr[randIndex] = indexVal[i];
    }

    cout<<"Summation of the randomly selected ten numbers: ";
        for(int i=0; i<=10; i++)
        {
            sum = sum + indexVal[i];
            //cout<<sum<<"\n";
        }
            cout<<sum<<"\n";

    cout<<"Randomly selected indexes:";
    for(int i=0; i<100; i++)
    {
        if(indexVal[i] == arr[i])
        {
            cout<<" "<<i;
        }
    }
}
