// Find the minimum value out of all the elements in the array

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {45,4,65,67,687,85,4,332,32,34,45,565,76};
    int mn = INT8_MIN;
    for(int i=1; i<(sizeof(arr)/4); i++)
        mn = min(mn, arr[i]);
    cout<<mn;
}