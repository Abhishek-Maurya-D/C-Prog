// Built in string functions
// size() / length()
// push_back() & append() & pop_back() & clear() & "+" operator

#include<iostream>
using namespace std;
int main()
{
    string s = "Abhishek";
    cout<<s<<"\n";
    s.pop_back();
    cout<<s<<"\n";
    s.pop_back();
    cout<<s<<"\n";
    
    s.push_back('e');
    cout<<s<<"\n";
    s.push_back('k');
    cout<<s<<"\n";

    s.append(" Maurya");
    cout<<s<<"\n";

    s.clear();
    cout<<s<<"\n";

    cout<<s.length();
}