// Print the given pattern --> square printing
// A B C D
// A B C D
// A B C D
// A B C D

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
            char ch = int(j+64);
            cout<<ch<<" ";

        }
        cout<<"\n";
    }
}