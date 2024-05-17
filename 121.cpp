// Power function (logarithmic)

#include<iostream>
using namespace std;
int power(int b, int e)
{
    if(e==1) return b;
    else if(e%2 == 0)
    {
        return power(b,e/2) * power(b,e/2);
    }
    else
    {
        return power(b,e/2) *power(b, e/2) * b;
    }
}
int main()
{
    int b, e;
    cout<<"Enter the base value : ";
    cin>>b;
    cout<<"Enter the exponent : ";
    cin>>e;
    cout<<power(b,e);
}