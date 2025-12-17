#include<iostream>
#include<vector>
using namespace std;

//DFS - depth first search
//t.c = O(v+E)

void dfs(vector<vector<int>>&adj, int source, vector<bool>&vis){
    cout<<source<<" ";
    vis[source] = true;
    for(int nbr : adj[source]){
        if(!vis[nbr]){
            dfs(adj,nbr,vis);
        }
    }
}

int main(){
    int v = 5;
    vector<vector<int>> adj;   //graph represented as an adjacency list
    vector<bool>visited(v,false);
    // Adding edges to the graph
    adj.push_back({1,2});
    adj.push_back({0,4});
    adj.push_back({0,3});
    adj.push_back({2,4});
    adj.push_back({1,3});

    int s=0;
    cout<<"DFS Traversal with source "<<s<<" : ";
    dfs(adj,s,visited);

    return 0;
}

