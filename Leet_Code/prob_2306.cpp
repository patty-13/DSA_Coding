#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n; cin>>n;
    vector<string> a(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    for(int i = 0, j = n; i < a.size(); i++, j--)
    {
        if(i == j) {break;}
        char str = a[i][0];
        char str1 = a[j][0];
        a[j][0] = str1;
        a[i][0] = str1;
        cout<<a[i]<<"\n";
    }
}