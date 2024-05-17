// Practice 

#include<iostream>
using namespace std;
int main()
{
    int x = 3, y, z;
    y = x = 10; // Precidence is right to left
    z = x < 10;
    cout<<x<<" "<<y<<" "<<z;
}