// Write a program to copy the contents of one array into another in the reverse order.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {43,24,54,55,6,54,56,75,76,45,64,63,54};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int newarr[n];
    for(int i = 0; i < n; i++) // Copy and reverse in a single step
        newarr[i] = arr[n - i - 1];
    for(int i = 0; i < n; i++) // Print the reversed array
        cout << newarr[i] << " ";
    return 0;
}
