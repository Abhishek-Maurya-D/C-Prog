// Take 3 numbers input and tell if they can be the side of a triangle

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 3-Numbers: ";
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a+b)>c || (b+c)>a || (c+a)>b)
    {
        cout<<"It is a valid Triangle";
    }
    else
    {
        cout<<"It is not a valid Triangle";
    }
}