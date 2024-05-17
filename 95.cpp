// Function for submittion
// pass by value

#include<iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<(a+b);
}
int main()
{
    int a, b;
    cout<<"Enter the Number: ";
    cin>>a;
    cout<<"Enter the Number: ";
    cin>>b;
    sum(a,b);
}