// If cost price and seling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also, determine how much profit he made or loss he incurred.

#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;
    if(sp-cp>0)
    {
        cout<<"Profit"<<"\n";
        cout<<"Amount : "<<sp-cp;
    }
    else if(sp-cp<0)
    {
        cout<<"Loss"<<"\n";
        cout<<"Amount : "<<cp-sp;
    }
    else
    {
        cout<<"No-Profit & No-Loss";
    }
}