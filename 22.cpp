// Given the length and breath of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter or not

#include<iostream>
using namespace std;
int main(){
    int l, b;
    cout<<"Enter the Length of the Rectangle : ";
    cin>>l;
    cout<<"Enter the breath of a rectangle : ";
    cin>>b;
    int area, perimeter;
    area = l*b;
    perimeter = 2*(l+b);
    if(area>perimeter)
    {
        cout<<"The Area is greater than the Perimeter";
    }
    else
        cout<<"The Perimeter is greater than the Area";
}