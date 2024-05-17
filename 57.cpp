// Write a program to print the sum of digits of a given number.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int digsum = 0;
    int n = num;
    while(num>0)
    {
        digsum = digsum + num%10;
        num = num/10;
    }
    cout<<digsum<<" is the sum of digits of the Number "<<n;
}