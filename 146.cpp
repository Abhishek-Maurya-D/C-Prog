// String and length

#include<iostream>
using namespace std;
int main()
{
    string s = "Abhishek is a good boy.";
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            count++;
    }
    cout<<"Number of vowel in the string is "<<count;
}