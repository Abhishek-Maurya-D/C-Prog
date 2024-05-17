// Print of the pattern 
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
// n will always be an odd number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int up = (n/2+1); // up - upper limit
    int lw = n/2; // lower limit
    for(int i=1; i<=up; i++)
    {
        for(int j=1; j<=up-i; j++)
            cout<<"  ";
        for(int k=1; k<=(i*2-1); k++)
            cout<<"* ";
        cout<<"\n";
    }
    for(int i=1; i<=lw; i++)
    {
        for(int j=1; j<=i; j++)
            cout<<"  ";
        for(int k=(lw*2-i); k>=i; k--)
            cout<<"* ";
        cout<<"\n";
    }
}