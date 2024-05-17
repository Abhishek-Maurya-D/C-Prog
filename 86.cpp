// Print the given pattern 
// *       *
//   *   *
//     *
//   *   *
// *       *
// provided both the columns and rows are odd in number

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
            if(i==j || (i+j)==(r+1))
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}