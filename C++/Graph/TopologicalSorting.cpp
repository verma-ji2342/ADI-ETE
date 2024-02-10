#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void DFS(vector<int>adj[], int u, stack<int> &st, bool visited[]){
    visited[u] = true;

    for(int v:adj[u]){
        if(visited[v] == false){
            DFS(adj,v,st,visited);
        }
    }
    st.push(u);
}


void topologicalSort(vector<int>adj[], int V){
    bool visited[V];
    for(int i=0 ; i<V ; i++){
        visited[i] = false;
    }

    stack<int>st;

    for(int i=0 ; i<V ; i++){
        if(visited[i] == false){
            DFS(adj, i, st, visited);
        }
    }

    while(st.empty() == false){
        int u=st.top();
        st.pop();
        cout<<u<<" ";
    }
}


// -----------------------------------------------BFS----------------------------
void TopologicalOrder(vector<int>adj[], int V){
    vector<int>in_degree(V,0);
    for(int i=0 ; i<V ; i++){
        for(int x : adj[i]){
            in_degree[x]++;
        }
    }

    queue<int>q;
    for(int i=0 ; i<V ; i++){
        if(in_degree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int x : adj[u]){
            if(--in_degree[x] == 0){
                q.push(x);
            }
        }
    }
}

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
}



int main(){
    int v=5;
    vector<int>adj[v];
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    

    cout<<"Following is a Topological Sort of \n";
    TopologicalOrder(adj, v);
    cout<<"\nTopological Order are\n";
    topologicalSort(adj, v);
}