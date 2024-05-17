// Display this GP - 3, 12, 48.. upto 'n' terms

#include<iostream>
using namespace std;
int main()
{
    int t=3,n;
    cout<<"Enter the Number of terms you want to print: ";
    cin>>n;
    for(int  i=1; i<=n; i++)
    {
        cout<<t<<"\n";
        t*=4;
    }
}