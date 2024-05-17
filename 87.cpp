// Print the given pattern 
// * * * * * * *
// *           *
// *           *
// * * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int r,c;// r is row and c is columns
    cout<<"Enter the Number of Rows: ";
    cin>>r;
    cout<<"Enter the Number of Columns: ";
    cin>>c;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(i==1 || j==1 || i==r || j==c)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}