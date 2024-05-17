// to calculate the sum of all the elements of the array

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,5,6,9,5};
    int sum=0;
    for(int i=0; i<(sizeof(arr)/4); i++)
        sum += arr[i];
    cout<<sum;
}