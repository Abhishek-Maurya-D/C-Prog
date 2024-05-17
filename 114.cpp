// print 1 to n by using recursion without using extra parameter
 
#include<iostream>
using namespace std;
void print(int n, int m)
{
    if(n==(m+1)) return;
    print(n+1,m);
    cout<<n<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    print(1,n);
}