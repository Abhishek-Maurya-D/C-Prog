// WAP to print product of digits of a given number (there be no '0' in the number)

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int digpro = 1;
    int n = num;
    while(num>0)
    {
        digpro = digpro * (num%10);
        num = num/10;
    }
    cout<<digpro<<" is the Product of digits of the Number "<<n;
}