// Questions using operators +,-,*,/,%

// WAP to count digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number to count its number of digits: ";
    cin>>n;
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<count<<" is the Number of digits in the Number"<<n;
}