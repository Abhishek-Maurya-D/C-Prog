// WAP to print reverse of a given number

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int new_num=0;
    int n = num;
    while(num>0)
    {
        new_num = new_num*10 + (num%10);
        num = num/10;
    }
    cout<<"Reverse of the number "<<n<<" is "<<new_num;
}