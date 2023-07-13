#include "bits/stdc++.h"
using namespace std;
int main()
{
    vector<vector<int>> graph {{1,2},{2,3},{5},{0},{5},{},{}};
    int n = graph.size();
    vector<vector<int>> adj(n);
    vector<bool> visited(n), instack(n);
    for(int i = 0 ; i < n ; i++)
    {
        for(auto node : graph[i])
        {
            adj[i].push_back(node);
        }
    }
}