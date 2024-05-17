// Given a point (x,y), write a program to find out if it lies in the 1st quadrnt, 2nd quadrant, 3rd quadrant, 4th quadrant, on the x-axis, y-axis or at the origin, viz (0,0).

#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the x-coordinate: ";
    cin>>x;
    cout<<"Enter the y-coordinate: ";
    cin>>y;
    if(x>0 && y>0)
    {
        cout<<"1st Quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"2nd Quadrant";
    }
    else if(x<0 && y<0)
    {
        cout<<"3rd Quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"4th Quadrant";
    }
    else if(x==0 && y==0)
    {
        cout<<"Point is at origin";
    }
    else
    {
        cout<<"Lies on the line of the coordinate geometry";
    }
}