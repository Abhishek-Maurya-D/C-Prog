// Input a string and update  all the even position in the string to character 'a'. Consider 0-based indexing.

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    for(int i=0; i<s.length(); i+=2)
            s[i] = 'a';
    cout<<s;
}