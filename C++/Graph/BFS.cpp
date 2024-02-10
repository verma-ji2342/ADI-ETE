#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<int>adj[], int v, int s){
    bool visited[v+1];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }
    queue<int>q;
    visited[s] = true;
    q.push(s);
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void bfs(vector<int>adj[], int s, bool visited[]){
    queue<int>q;
    visited[s] = true;
    q.push(s);
    while(q.empty() == false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}


void BFSDin(vector<int>adj[], int v){
    bool visited[v];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }

    for(int i=0 ; i<v ; i++){
        if(visited[i] == false){
            bfs(adj,i,visited);
        }
    }
}