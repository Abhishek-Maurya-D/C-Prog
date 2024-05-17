// Print the factorial of a given number "n"

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int fact = 1;
    int n = num;
    while(num>0)
    {
        fact = fact*num;
        num = num-1;
    }
    cout<<fact<<" is the factorial of "<<n;
}