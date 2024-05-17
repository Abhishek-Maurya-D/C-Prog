// Give an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
        arr[i-1] = i*i;
    for(int j=0; j<n; j++)
        cout<<arr[j]<<"\n";
}