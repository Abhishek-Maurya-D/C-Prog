// print 1 to n by using recursion

#include<iostream>
using namespace std;
void print(int n, int m)
{
    if(n==(m+1)) return;
    cout<<n<<"\n";
    print(n+1,m);
}
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    print(1,n);
}