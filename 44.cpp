// Display this AP - 1,3,5,7,9... upto 'n' terms

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto which you want to print the A.P. : ";
    cin>>n;
    // 1, 3, 5, 7, 9 .....
    // loop runs (n-1)*a; n is the number of terms and a is the first term
    for(int i=1; i<=(2*n-1); i+=2)
        cout<<i<<"\n";
}