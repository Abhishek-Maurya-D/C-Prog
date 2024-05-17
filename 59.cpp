// WAP to print sum of all the even digits of a given number

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int sum = 0;
    while(num>0)
    {
        if((num%10)%2==0)
            sum = sum+(num%10);
        num = num/10;
    }
    cout<<sum<<" is the sum of all the even digits of a Number.";
}