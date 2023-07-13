/**
 * 1. method using recursion.
 *  -> create two functions 1. when we include the current string
 *  -> 2. when we do not include the current string.
 * 
 * 2. using bit representation.
 *  -> each subset of a set of integers can be represented as a 
 * sequence of n bits, which correspond to an integer between 
 * 0 and 2^n-1
*/
#include "bits/stdc++.h"
using namespace std;
// void sub_set_bit(string s)
// {
//     for(int i = 0; i < (1<<s.length()) ; i++)
//     {
    
//     }
// }
void sub_set(string s, int st, string curr ="")
{
    int n = s.length();
    if(st == n){cout<<"i3 "; cout<<curr<<"\n"; return;}
    else
    {
        //cout<<"i1 "<<st+1<<" "<<curr+s[st]<<"\n";
        sub_set(s,st+1,curr + s[st]);
        cout<<"i1 "<<st+1<<" "<<curr+s[st]<<"\n";
        // cout<<"i2 "<<st+1<<" "<<curr<<"\n";
        sub_set(s,st+1,curr);
        cout<<"i2 "<<st+1<<" "<<curr<<"\n";
    }


}
int main()
{
    string s; cin>>s;
    sub_set(s,0);
   // sub_set_bit(s);
}