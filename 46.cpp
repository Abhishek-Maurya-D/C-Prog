// Display this AP - 4,7,10,13.. upto 'n' terms

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of terms of the AP you want to print: ";
    cin>>n;
    int a = 4;
    for(int i=0; i<n; i++)
    {
        cout<<a<<"\n";
        a+=3;
    }
}