#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void DFSRec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            DFSRec(adj, u, visited);
        }
    }
}

void DFS(vector<int> adj[], int v, int s)
{
    bool visited[v + 1];
    for (int i = 0; i <= v; i++)
    {
        visited[i] = false;
    }
    DFSRec(adj, s, visited);
}   

// --------------------------------Optimize DFS -----------------------------------

void dfsRec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            dfsRec(adj, u, visited);
        }
    }
}

int dfs(vector<int> adj[], int v)
{
    bool visited[v];
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            dfsRec(adj, i, visited);
            count++;
        }
    }
}