// print n to 1 by using recursion

#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0) return;
    cout<<n<<"\n";
    print(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    print(n);
}