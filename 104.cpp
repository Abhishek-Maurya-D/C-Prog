//Swap 2 Numbers using pass by value
#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    x=y;
    y=temp;
}
int main()
{
    int x, y;
    cout<<"Enter the two Numbers: ";
    cin>>x>>y;
    cout<<x<<" "<<y<<"\n";
    swap(x,y);
    // x = x+y;
    // y = x-y;
    // x = x-y;
    cout<<x<<" "<<y<<"\n";
}