#include <iostream>
#include <vector>
#include "BFS.cpp"
#include "DFS.cpp"

using namespace std;
void addedge(vector<int>adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}


void printgraph(vector<int>adj[], int v){
    for(int i=0 ; i<v ; i++){
        for(auto e : adj[i]){
            cout<<e<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the vertices of graph :"<<endl;
    cin>>n;
    vector<int>adj[n];
    // addedge(adj, 0, 1);
    // addedge(adj, 0, 2);
    // addedge(adj, 1, 2);
    // addedge(adj, 1, 3);
    // addedge(adj, 3, 4);
    // addedge(adj, 2, 3);
    // addedge(adj, 4, 2);
    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 3);
    addedge(adj, 2, 3);
    addedge(adj, 4, 5);
    addedge(adj, 5, 6);
    addedge(adj, 6, 4);
    printgraph(adj,n);
    cout<<"Normal BFS :\n";
    BFS(adj,n,0);
    cout<<"\nOptimize BFS\n";
    BFSDin(adj,n);
    cout<<"\nNormal DFS\n";
    DFS(adj,n,0);
    cout<<"\nOptimize DFS\n";
    dfs(adj, n);
    return 0;
}