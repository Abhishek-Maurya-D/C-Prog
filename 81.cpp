// Pattern
// 1
// 2 3
// 4 5 6 
// 7 8 9 10

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the Number of Row's : ";
    cin>>r;
    int t=1;
    for(int i = 1; i<=r; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout<<t<<" ";
            t++;
        }
        cout<<"\n";
    }
};