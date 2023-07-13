#include "bits/stdc++.h"
using namespace std;
void addEdge(vector<vector<int>> &adj, int x, int y)
{
    adj[x].push_back(y);
}

int main()
{
    int v; cin>>v;
    vector<vector<int>> adj;
    vector<bool> visisted(v, false);
    for(int i = 0; i < v; i++)
    {
        int x; int y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    for(int i = 0 ; i < v ; i++)
    {
        if(!visisted)
        
    }
}