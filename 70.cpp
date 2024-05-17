// Pattern - square printing 
// A A A A
// B B B B
// C C C C
// D D D D

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
        {
            char ch = int(i+64);
            cout<<ch<<" ";

        }
        cout<<"\n";
    }
}