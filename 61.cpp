// WAP to print the sum of given number and its reverse.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int sum = 0, reverse = 0;
    while(num>0)
    {
        sum = sum + (num%10);
        reverse = (reverse*10) + (num%10);
        num = num/10;
    }
    cout<<sum<<" is the sum of the Number"<<"\n";
    cout<<reverse<<" is the reverse of the Number";
}