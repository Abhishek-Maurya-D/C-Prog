// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i<=128; i++)
    {
        char j = (char)i;
        cout<<i<<" - "<<j<<"\n";
    }
}