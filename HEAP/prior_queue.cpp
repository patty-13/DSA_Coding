#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,k,w;
    cin>>n>>k>>w;
    vector<int> profit(n), capital(n);
    vector<pair<int,int>> p(n);
    for(int i = 0; i < n ; i++) { cin>>profit[i]; }
    for(int i = 0; i < n ; i++) { cin>>capital[i]; }
    for(int i =0 ; i < capital.size() ;i++)
    {
        p.push_back({capital[i],profit[i]});
    }
    sort(p.begin(), p.end());
    priority_queue<int> pq;
    int  i = 0;
    while(k--)
    {
        while(i<p.size() && p[i].first <=w)
        {
            pq.push(p[i].second);
            i++;
        }
        if(pq.empty()) break;
        cout<<"top element"<<pq.top()<<"\n";
        w += pq.top();
        pq.pop();
    }
    cout<<"Result is "<<w<<"\n";

}