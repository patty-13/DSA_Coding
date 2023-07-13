#include "bits/stdc++.h"
using namespace std;
int bfs(vector<int> adj[], int start, int destination, int n)
{
    int dist[n];
    for(int i = 0 ;i < n ; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[0] = 0;
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto next_node : adj[node])
        {
            if(!visited[next_node] && next_node != destination)
            {
                visited[next_node] = true;
                q.push(next_node);
                dist[next_node] = dist[node] + 1;
            }
        }
    }

}
int main()
{
    int start; cin>>start;
    int destination; cin>>destination;
    int n; cin>>n;
    vector<int> adj[n];
    for(int i = 0 ; i < n ;i++)
    {
        int x; cin>>x;
        int y; cin>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<bfs(adj,start,destination,n);
}