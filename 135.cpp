// If an array arr contains n elements, then check if the given array is a palindrome or not

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,4,5,5,4,3,2,1};
    int flag=1;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]))/2; i++)
    {
        if(arr[i] != arr[(sizeof(arr)/sizeof(arr[0]))-i-1])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        cout<<"The array is a Palindrome";
    else
        cout<<"The array is not a Palindrome";
}