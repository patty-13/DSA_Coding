#include "bits/stdc++.h"
using namespace std;
void BFS(vector<vector<int>> &adj, int v)
{
    vector<bool> visited(false, v);
    queue<int> q;
    int s = 1; // we are just taking the first element
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto i : adj[node])
        {
            if(!visited[i]){visited[i] = true; q.push(i);}
        }
    }

}
void addEdge(vector<vector<int>> &adj, int x , int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main()
{
    int n,v; cin>>n>>v;
    vector<vector<int>> adj;
    int x, y;
    for(int i = 0; i<n ; i++)
    {
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    BFS(adj, v);

}
