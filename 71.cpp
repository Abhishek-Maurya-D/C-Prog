// Print the following pattern 
// *
// * *
// * * *
// * * * *

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the Number of Row's : ";
    cin>>r;
    for(int i = 1; i<=r; i++)
    {
        for(int j =1 ; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}