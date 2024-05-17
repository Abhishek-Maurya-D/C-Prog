// Break statement 
// WAP to find the highest factor of a number 'n' (other than n itself)

#include<iostream>
using namespace std;
int main()
{
    int num;
    int f = 1;
    cout<<"Enter the Number to which you want to find the Highest Factor : ";
    cin>>num;

    // This is the good approach 
    // for(int i = 2; i<num; i++)
    // {
    //     if(num%i==0)
    //         f=i;
    // }
    // if(f!=1)
    //     cout<<f<<" is the highest factor of "<<num;
    // else
    //     cout<<f<<" is the highest factor of "<<num;

    // This is the better version of the above code
    for(int i=num/2; i>=1; i--)
    {
        if(num%i==0)
        {
            cout<<i;
            break; // to get out of the loop
        }
    }
}