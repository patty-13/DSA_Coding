#include "bits/stdc++.h"
using namespace std;
void BFS(vector<vector<int>> &adj, int node, vector<bool> &visited)
{
    queue<int> q;
    q.push(node);
    visited[node] =true;
    while(!q.empty())
    {
        int current_node = q.front();
        q.pop();
        for(auto x : adj[node])
        {
            if(!visited[x]){visited[x] = true;}
            q.push(x);
        }

    }
}
void addEdge(vector<vector<int>> &adj, int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main()
{
    int n,v; cin>>v>>v;
    vector<bool> visited(v, false);
    vector<vector<int>> adj;
    for(int i = 0 ; i < n ; i++)
    {
        int x,y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    for(int i = 0 ; i < v; i++)
    {
        if(!visited[i]) BFS(adj,i,visited);
    }
}