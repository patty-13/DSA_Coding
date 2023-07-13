#include "bits/stdc++.h"
using namespace std;
void BFS(vector<vector<int>> &adj, int node, vector<bool> &visited, vector<int> &dist)
{
    visited[node] = true;
    queue<int> q;
    q.push(node);
    while(!q.empty())
    {
        int curr_node = q.front();
        q.pop();
        for(auto x : adj[curr_node])
        {
            if(!visited[x])
            {
                dist[x] = dist[curr_node] + 1;
                visited[x] = true;
                q.push(x);
            }

        }

    }
}
void add_edge(vector<vector<int>> &adj, int x , int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main()
{
    int n,v; cin>>n>>v;
    vector<vector<int>> adj;
    vector<bool> visited(v, false);
    vector<int> dist(v, INT_MAX);
    for(int i = 0 ; i < n ;i++)
    {
        int x, y;
        cin>>x>>y;
        add_edge(adj, x, y);
    }
    int source = 0;
    dist[0] = source;
    BFS(adj, source, visited, dist);
    for(int i = 0 ; i < v ; i++)
    {
        cout<<dist[i]<<" ";
    }
}