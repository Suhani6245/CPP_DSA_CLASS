//shortest distance from source node to every other node in an unweighted graph using BFS -
//destination level - source level = distance

#include<iostream>
#include<vector>
#include<queue> 
using namespace std;

int shortestDistace(int source, int dest, vector<vector<int>>&adj){
    int v = adj.size();
    vector<bool>vis(v,false);
    queue<pair<int,int>>q;
    q.push({source,0});
    vis[source] = true;
    while(!q.empty()){
        auto front = q.front();
        int node = front.first;
        int level = front.second;
        if(node==dest) return level;
        q.pop();
        for(int nbr: adj[node]){
            if(!vis[nbr]){
                q.push({nbr,level+1});
                vis[nbr] = true;
            }
        }

    }
}


int main(){
     int v = 6; //number of nodes
    vector<vector<int>> adj;   //graph represented as an adjacency list

    // Adding edges to the graph
    adj.push_back({1,2});
    adj.push_back({0,2});
    adj.push_back({1,4,3});
    adj.push_back({2,4});
    adj.push_back({3,2,5});
    adj.push_back({0,4});

    int s = 0; int d= 3;
    int distance = shortestDistace(s,d,adj);
    cout<<"Distance between source "<<s<<" and destination "<<d<<": "<<distance;


}