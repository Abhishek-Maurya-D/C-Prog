// Take 3 positive intergers input and print the greatest of them without using multiple conditions

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter three Numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;
    // a>b and b>c --> a>c --> a is greatest
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greatest";
        }
        else
        {
            cout<<c<<" is greatest";
        }
    }
    else // b>a
    {
        if(b>c)
        {
            cout<<b<<" is greatest";
        }
        else
        {
            cout<<c<<" is greatest";
        }
    }
}