//Swap 2 Numbers
#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the two Numbers: ";
    cin>>x>>y;
    cout<<x<<" "<<y<<"\n";
    // int temp = x;
    // x=y;
    // y=temp;

    x = x+y;
    y = x-y;
    x = x-y;
    
    cout<<x<<" "<<y<<"\n";
}