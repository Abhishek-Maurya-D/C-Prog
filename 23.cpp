// Take positive interger input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number: ";
    int num;
    cin>>num;
    // if(num>99 and num<1000)
    if(num>99 && num<1000)
    {
        cout<<"Number is of 3-digits";
    }
    else
    {
        cout<<"Number is not of the three digit's";
    }
}