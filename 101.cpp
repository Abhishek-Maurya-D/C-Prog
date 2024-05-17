// Pascal Triangle
//                 1
//              1     1
//           1     2     1
//       1     3     3     1
//   1     4     6     4     1
#include<iostream>
using namespace std;
int fact(int a)
{
    int f=1;// f - factorial
    for(int i=2; i<=a; i++) f*=i;
    return f;
}
int ncr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cout<<"Enter the value of 'n' : ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n-i+1; j++)
            cout<<"  ";
        for(int j=0; j<=i; j++)
            cout<<ncr(i,j)<<"  ";
        cout<<"\n";
    }
}