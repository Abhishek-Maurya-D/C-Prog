#include<iostream>
using namespace std;
int main()
{
    int x = 3; 
    int* p = &x;
    cout<<x<<"\n";
    *p = 45;
    cout<<x<<"\n";
}