#include "bits/stdc++.h"
using namespace std;
bool check_palindrom(string s)
{
    if(s.size()==1){return true;}
    else{return check_palindrom(s+1) == check_palindrom(s-1)}
}
int main()
{
    string s;
    cin>>s;
    cout<<check_palindrom(s);
}