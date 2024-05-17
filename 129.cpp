// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {43,45,45,65,6,76,76,56,4,34,34,56};
    for(int i=0; i<(sizeof(arr)/4); i+=2)
        arr[i] += 10;
    for(int i=1; i<(sizeof(arr)/4); i+=2)
        arr[i] *= 2;
    for(int i=0; i<(sizeof(arr)/4); i++)
        cout<<arr[i]<<" ";
}