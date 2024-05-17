// Pattern
// 4
// 4 3
// 4 3 2
// 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the Number of Row's : ";
    cin>>r;
    for(int i = 1; i<=r; i++)
    {
        for(int j =r; j>=r-i+1; j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
};