// Count the number of elements in given array greater than a given number x.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {43,44,45,54,56,56,57,56,75,6,34,53,23};
    int num, count = 0;
    cout<<"Enter the values to count: ";
    cin>>num;
    for(int i=0; i<(sizeof(arr)/4);i++)
    {
        if(num == arr[i])
            count++;
    }
    cout<<"Number of times "<<num<<" occurs in the array is : "<<count;
}