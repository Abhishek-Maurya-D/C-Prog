// Input a string of even length and reverse the first half of the string.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = " Abhishek  Maurya ";
    int n = s.length();
    
    reverse(s.begin(), s.begin()+n/2);

    // if (n % 2 == 0) // Ensure the string length is even
    //     reverse(s.begin(), s.begin() + n / 2);
    // else
    //     cout << "The length of the string is not even.\n";
    cout << s << "\n";
    return 0;
}
