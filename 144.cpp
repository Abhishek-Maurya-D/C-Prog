// String

#include<iostream>
using namespace std;
int main()
{
    string s;
    // string s = "Abhishek Maurya";
    // cout<<"Enter a string: ";
    // cin>>s;
    getline(cin,s);
    s[0]='M';
    cout<<s;
}