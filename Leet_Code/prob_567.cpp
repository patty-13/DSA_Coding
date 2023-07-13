#include "bits/stdc++.h"
using namespace std;
int main()
{
    string s1 = "ab", s2 ="eidbaooo";
    vector<int> a(26,0), b(26,0);
    for(int i = 0; s1[i] && s2[i]; i++)
    {
        a[s1[i]]++;
        b[s2[i]];
    }
}