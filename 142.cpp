// Given a matrix 'a' of dimension nXm and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).
#include<iostream>
using namespace std;
int main()
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    int sum=0, x1,x2, y1, y2;
    cout<<"Enter the first coordinate (3X3) : ";
    cin>>x1>>y1;
    cout<<"Enter the second coordinate (3X3) : ";
    cin>>x2>>y2;
    for(int i=x1; i<=x2; i++)
    {
        for(int j=y1; j<=y2; j++)
            sum += arr[i][j];
    }
    cout<<sum<<"\n";
}