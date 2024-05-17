// use of Continue in looping 
// Printing the Numbers from 1 to 10 excluding 3 & 8

#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
    {
        //if(i!=3 || i!=8) //see the changes
        // if(i!=3 && i!=8)
        if(i==3 || i==8) continue;
        cout<<i<<"\n";

    }
}