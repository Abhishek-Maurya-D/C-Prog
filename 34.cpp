//if-else
// Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply or divide) using switch case. The calculator should input two numbers and an operator from user.

#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the 1st Number : ";
    cin>>n1;
    int n2;
    cout<<"Enter the 2nd Number : ";
    cin>>n2;
    char op;
    cout<<"Enter the Operator : ";
    cin>>op;
    if(op == '+')
        cout<<n1+n2<<" is the Sum";
    else if(op == '-')
        cout<<n1-n2<<" is the Subtraction";
    else if(op == '*')
        cout<<n1*n2<<" is the Multiplication";
    else if(op == '/')
        cout<<n1/n2<<" is the Division";
    else if(op == '%')
        cout<<n1%n2<<" is the Remainder";
    else
        cout<<"Invalid Operand";
}