// Permutation
#include<iostream>
using namespace std;
int fact(int a)
{
    int f=1;// f - factorial
    for(int i=2; i<=a; i++) f*=i;
    return f;
}
int main()
{
    int n, r;
    cout<<"Enter the Total Number of item's(n) & Number of item's taken(r): ";
    cin>>n>>r;
    int factn=fact(n), factnr=fact(n-r);
    cout<<factn/factnr;
}