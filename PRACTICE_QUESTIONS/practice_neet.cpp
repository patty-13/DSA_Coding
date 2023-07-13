#include "bits/stdc++.h"
using namespace std;
int main()
{
    string s1 = "ABCABCD";
    set<char> s(s1.begin(), s1.end());
    for(auto it : s)
    {
        cout<<it;
    }
}