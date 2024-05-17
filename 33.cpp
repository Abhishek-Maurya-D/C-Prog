// Ternary Operator
// To check that the number is even or odd

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    // (Condition) ? if true : if false;
    (n%2==0)?cout<<"Even Number":cout<<"Odd Number";
}