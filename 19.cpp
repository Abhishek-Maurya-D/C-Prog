// Take positive interger input and tell if it is divisible by 5 or not.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number: ";
    int x;
    cin>>x;
    if(x%5==0)
        cout<<"Divisible by 5";
    else
        cout<<"Not divisible by 5";
}