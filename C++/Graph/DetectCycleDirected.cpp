#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void topologicalSort(vector<int>adj[], int V){
    vector<int>in_degree(V,0);

    for(int i=0 ; i<V ; i++){
        for(int x:adj[i]){
            in_degree[x]++;
        }
    }

    queue<int>q;
    for(int i=0 ; i<V ; i++){
        if(in_degree[i] == 0){
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int x:adj[u]){
            if(--in_degree[x] == 0){
                q.push(x);
            }
            count++;
        }
    }
    if(count != V){
        cout<<"There exist a cycle in graph\n";
    }
    else{
        cout<<"There exist no cycle in graph\n";
    }
    return;
}


bool DFSREC(vector<int>adj[], int s, bool visited[], bool recSt[]){
    visited[s]=true;
    recSt[s]=true;

    for(int u:adj[s]){
        if(visited[u]==false && DFSREC(adj,u,visited,recSt)==true){
            return true;
        }
        else if(recSt[u] == true){
            return true;
        }
    }
    recSt[s] = false;
    return false;
}

bool DetectCycle(vector<int>adj[], int v){
    bool visited[v];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }
    bool recSt[v];
    for(int i=0 ; i<v ; i++){
        recSt[i] = false;
    }

    for(int i=0 ; i<v ; i++){
        if(visited[i] == false){
            if(DFSREC(adj,i,visited,recSt) == true){
                return true;
            }
        }
    }
    return false;
}

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
}

int main(){
    int v=6;
    vector<int>adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 2, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 3);

    topologicalSort(adj, v);

    if(DetectCycle(adj,v)){
        cout<<"Cycle Found! ";
    }
    else {
        cout<<"No Cycle Found! ";
    }
    return 0;
}