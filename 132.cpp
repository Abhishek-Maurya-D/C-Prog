// Find the second largest element in the given array.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {34,30,53,55,65,76,57,56,45,32,33};
    int mx = 0;
    int secmx = mx;
    for(int i=0; i<(sizeof(arr)/4); i++)
    {
        if(mx<arr[i])
        {
            secmx=mx;
            mx = arr[i];
        }
    }
    cout<<"Second largest Element in the array is : "<<secmx;
}