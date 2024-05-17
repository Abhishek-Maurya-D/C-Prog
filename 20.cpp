// Take interger input and print the absolute value of that interger

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number: ";
    int x;
    cin>>x;
    // if(x>=0)
    //     cout<<x;
    // else
    //     cout<<(-x);

    // If you want to change n into its absolute value
    if(x<0) x = -x;
    cout<<x;
}