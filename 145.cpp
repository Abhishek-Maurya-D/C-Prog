// String and length

#include<iostream>
using namespace std;
int main()
{
    // string s= "Abhishek Maurya";
    // cout<<s.length();
    
    // char ch = '\0';
    // cout<<(int)ch;
    
    // int x = 0;
    // cout<<(char)x;

    string s = "Abhishek is a good boy.";
    int n = s.length();
    for(int i=0; i<n; i++)
        cout<<s[i];
}