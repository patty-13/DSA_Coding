#include "bits/stdc++.h"
using namespace std;
// converting into dynamic programming problem
//int memo[m+1][n+1] = {-1};
int lcs(string s1, string s2, int m, int n)
{
    if(memo[m][n] != -1)
    {
        return memo[m][n];
    }
    if(m ==0 || n== 0)
    {
        memo[m][n] = 0;
    }
     if(s1[m-1] == s2[n-1])
     {
        memo[m][n] =  1 + lcs(s1,s2,m-1,n-1);
     }
     else
     {
       memo[m][n] =  max(lcs(s1,s2,m-1,n), lcs(s1,s2,m,n-1));
     }
     return memo[m][n];
}
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int m = s1.length(); 
    int n = s2.length();
    cout<<lcs(s1,s2,m,n);
}
