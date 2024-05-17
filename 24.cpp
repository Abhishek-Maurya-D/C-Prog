// Take positive interger input and tell if it is divisible by 5 and 3

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    // if(num%5==0 && num%3==0)
    // {
    //     cout<<"Number is divisible by both 5 and 3";
    // }
    if(num%15==0)
    {
        cout<<"Number is divisible by both 5 and 3";
    }
    else
    {
        cout<<"Number is not divisible by 5 and 3";
    }
}