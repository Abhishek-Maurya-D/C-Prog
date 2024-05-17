// WAP to check if a number is composite or not
// if n has extra factor/factors except 1 & n, then it is composite
// if any number is not a composite so, it is a prime
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number to check is it a Composite or Prime: ";
    cin>>num;
    bool isComposite = false;
    for(int i=2; i<=(num/2); i++)
    {
        if(num%i == 0)
        {
            isComposite = true;
            break;
        }
    }
    if(num == 1)
        cout<<"Neither Composite Nor Prime";
    else if(isComposite)
        cout<<num<<" is Composite"<<"\n";
    else
        cout<<num<<" is a Prime"<<"\n";
}