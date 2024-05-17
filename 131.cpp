// Find the difference between the sum of elements at even indices to the sum of elements at odd indices

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {34,97,34,45,45,65,75,67,56,75,64,57,35};
    int sumeven = 0, sumodd = 0;
    for(int i=0; i<(sizeof(arr)/4); i++)
    {
        if(i%2 == 0)
            sumeven += arr[i];
        else
            sumodd += arr[i];
    }
    cout<<"The difference between the elements at even to the odd indices values is : "<<(sumeven-sumodd);
}