// Print the following pattern 
// A
// B B
// C C C
// D D D D

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the Number of Row's : ";
    cin>>r;
    for(int i = 1; i<=r; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout<<(char)(i+64)<<" ";
        }
        cout<<"\n";
    }
};