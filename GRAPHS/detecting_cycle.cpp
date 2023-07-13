#include "bits/stdc++.h"
using namespace std;
bool DFS(vector<vector<int>> adj, int node, vector<bool> visited, int parent)
{
    visited[node] =true;
    for(auto x: adj[node])
    {
        if(!visited[x])
        {
            visited[x] = true;
            if(DFS(adj, x, visited, node) == true) return true;
            else if(x!=parent) return true;
        }
    }
    return false;
}
void addEdge(vector<vector<int>> &adj, int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main()
{
    int v; cin>>v; // for number of vertices.
    int n; cin>>n; // for number of edges to be inserted.
    vector<vector<int>> adj;
    vector<bool> visited(v, false);
    for(int i = 0; i < n ; i++)
    {
        int x, y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    // this for checking if there are disconnected graphs
    for(int i = 0 ; i < v; i++)
    {
        if(!visited[i])
        {
            if(DFS(adj, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;

}