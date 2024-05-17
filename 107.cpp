// Introduction to Pointers

#include<iostream>
using namespace std;
int main()
{
    int x = 3; 
    int* p = &x;
    cout<<&x<<"\n";
    cout<<p<<"\n";
    cout<<"\n";
    cout<<*p<<"\n";
    cout<<x<<"\n";
}