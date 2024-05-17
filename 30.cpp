// If the ages of Ram, Shyam and Ajay are input through the keyboard. Write a program to determine the youngest of the three.

#include<iostream>
using namespace std;
int main(){
    int a1, a2, a3;
    cout<<"Enter the Age of Ram: ";
    cin>>a1;
    cout<<"Enter the Age of Shyam: ";
    cin>>a2;
    cout<<"Enter the Age of Ajay: ";
    cin>>a3;
    if(a1<a2)
    {
        if(a1<a3)
            cout<<"Ram is the Youngest one";
        else
            cout<<"Ajay is the Youngest one";
    }
    else //a2<a1
    {
        if(a2<a3)
            cout<<"Shyam is the Youngest one";
        else
            cout<<"Ajay is the Youngest one";

    }
}