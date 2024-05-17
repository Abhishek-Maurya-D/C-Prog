// Print the following pattern 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the Number of Row's : ";
    cin>>r;
    for(int i = 1; i<=r; i++)
    {
        for(int j =1; j<=r-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
};