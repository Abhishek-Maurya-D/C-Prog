// Take input percentage of a student and print the Grade according to marks:
// a) 81-100 Very Good
// b) 61-80 Good
// c) 41-60 Average
// d) <40 Fail

#include<iostream>
using namespace std;
int main()
{
    int perc;
    cout<<"Enter the Percentage: ";
    cin>>perc;
    if(perc>=81 and perc<=100)
    {
        cout<<"Very Good";
    }
    else if(perc>=61 and perc<=80)
    {
        cout<<"Good";
    }
    else if(perc>=41 and perc<=60)
    {
        cout<<"Average";
    }
    else
    {
        cout<<"Fail";
    }
}