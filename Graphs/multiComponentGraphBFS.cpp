#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//t.c = O(V + E) and s.c = O(V)
void bfs(vector<vector<int>>&adj, int source, vector<bool>& visited){
    int v = adj.size();
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int nbrs: adj[node]){
            if(!visited[nbrs]){
                visited[nbrs] = true;
                q.push(nbrs);
            }
        }
    }
}


int main(){
    int v = 5;
    vector<bool> visited(v, false);
    vector<vector<int>> adj;   //graph represented as an adjacency list
    // Adding edges to the graph
    adj.push_back({1,2});  //component 1
    adj.push_back({0,2});  //component 1
    adj.push_back({0,1});  //component 1
    adj.push_back({4});   //component 2
    adj.push_back({3});   //component 2
    
    int component = 0;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            bfs(adj, i, visited);
            component++;
        }
    }

    cout<<endl<<"Number of components in the graph: "<<component<<endl;

    return 0;
}