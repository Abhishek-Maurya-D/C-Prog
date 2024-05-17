// Combination and Permutation

#include<iostream>
using namespace std;
int main()
{
    int n, r;
    cout<<"Enter the Total Number of item's(n): ";
    cin>>n;
    cout<<"Enter the Number of item's taken(r): ";
    cin>>r;
    int factn=1, factr=1, factn_1=1;
    for(int i=1; i<=n; i++)
        factn*=i;
    for(int i=1; i<=r; i++)
        factr*=i;
    for(int i=1; i<=(n-r); i++)
        factn_1*=i;
    cout<<factn/(factr*factn_1);
}