// Print the given pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

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
            cout<<i<<" ";
        cout<<"\n";
    }
}