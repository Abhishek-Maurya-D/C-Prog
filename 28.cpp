// Take positive interger input and tell if it is divisible by 5 or 3 but not divisible by 15

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Number";
    int num;
    cin>>num;
    if((num%5==0 || num%3==0) && (num%15!=0))
    {
        cout<<"Number is divisible by 5 or 3 and not by 15";
    }
    else
    {
        cout<<"Number is not divisible by 5 or 3 and by 15";
    }
}