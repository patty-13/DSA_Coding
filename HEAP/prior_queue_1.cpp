#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < a.size() ; i++)
    {
        cin>>a[i];
    }
    priority_queue<int> pq;
    for(int i = 0; i < a.size() ; i++)
    {
        if(a[i]%2 != 0)
        {
            pq.push(a[i]*2);
        }
        else
        {
            pq.push(a[i]/2);
        }
    }
}