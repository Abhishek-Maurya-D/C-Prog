// stoi & to_string()

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x = 453543535;
    string s = to_string(x);
    s += "Maurya";
    cout<<s;
}

// Advantage
// Return the total number of digits in a number without using any loop.
// Hint : try using inbuilt to_string() function