#include "bits/stdc++.h"
using namespace std;
// number of connected components in a graph.
const int N = 2e5+5;
bool visited[N];
vector<int> adj_list[N];
void dfs(int current)
{
    visited[current] = true;
    for(int next_vertex : adj_list[current])
    {
        if(visited[next_vertex] == true)
        {
            continue;
        }
        dfs(next_vertex);
    }
}
int main()
{
    int n_vertices, n_edges;
    cin>>n_vertices>>n_edges;
    
    for(int i = 0 ; i < n_edges ; i++)
    {
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(y);
    }
    int ans = 0;
    for(int i =0 ;i < n_vertices ; i++)
    {
     if(visited[i] == true) {continue;} 
     // if we already visited the connected component we will not count it
     // else we will perform dfs and check the next connected component
     // and count it/  
        dfs(i);
        ans++;
    }
    cout<<ans;
}