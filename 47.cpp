// Display this GP - 1,2,4,8,16,32... upto 'n' terms.

#include<iostream>
using namespace std;
int main()
{
    int a, r, n; // a is the first term, r is the common ratio, and n is the number of terms
    cout<<"Enter the First term: ";
    cin>>a;
    cout<<"Enter the Common Ratio: ";
    cin>>r;
    cout<<"Enter the Number of terms you want to print of the GP: ";
    cin>>n;
    int t=a;// denotes the current term of the GP
    for(int  i=1; i<+n; i++)
    {
        cout<<t<<"\n";
        t*=r;
    }
}