#include "bits/stdc++.h"
using namespace std;
vector<bool> visited;
void dfs(vector<int> adj[], int node)
{
    visited[node] = true;
    for(auto next_node : adj[node])
    {
        if(visited[next_node] == true){continue;}
        dfs(adj,next_node);    
    } 
     
}
int main()
{
    int m,n; cin>>n>>m;
    vector<int> adj[n+1];
    for(int i = 0; i < m ;i++ )
    {
        int x ; cin>>x;
        int y ; cin>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int start = 0;
    dfs(adj, start);
}