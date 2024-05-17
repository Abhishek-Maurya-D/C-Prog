// Print the table of 19 upto 10-times

#include<iostream>
using namespace std;
int main()
{
    // 171 -times the loop execute
    // for(int i = 19; i<=190; i++)
    //     if(i%19==0) cout<<i<<"\n";
    
    // 10 - times the loop execute
    for(int i=19; i<=190; i=i+19)
        cout<<i<<"\n";
}