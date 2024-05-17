// WAP to reverse the elements of one array to itself in order.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    for(int i = 0; i < n/2; i++) // Copy and reverse in a single step
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for(int i = 0; i < n; i++) // Print the reversed array
        cout << arr[i] << " ";
    return 0;
}
