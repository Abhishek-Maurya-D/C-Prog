// for rectangular '*' pattern in the form of m X m

#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the Number of Columns & Rows: ";
    cin>>m;
    for(int i =1; i<=m; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<"* ";
        cout<<"\n";
    }
}