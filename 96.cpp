// Function for submittion
// pass by value

#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b;
    cout<<"Enter the Number: ";
    cin>>a;
    cout<<"Enter the Number: ";
    cin>>b;
    cout<<sum(a,b);
}