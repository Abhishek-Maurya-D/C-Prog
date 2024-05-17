// Take 3 positive integers input and print the greatest of them

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter 3 Number's: ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is the greatest one";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the greatest one";
    }
    else
    {
        cout<<c<<" is the greatest one";
    }
}