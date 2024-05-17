// Function

#include<iostream>
using namespace std;
void great()
{
    cout<<"Good Morning"<<"\n";
    cout<<"How are you?"<<"\n";
}
void india()
{
    cout<<"You are in India\n";
}
void usa()
{
    india();
    cout<<"You are in U.S.A.\n";
    cout<<"You are in U.S.A.\n";
}
int main()
{
    great();
    india();
    usa();
    return 0;
}