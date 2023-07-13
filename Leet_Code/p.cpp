#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n; cin>>n;cout<<n%10; cout<<n/10<<"\n";
    int size = trunc(log10(n)) + 1;
    cout<<size;
}