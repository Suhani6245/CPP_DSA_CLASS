#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

void dijkstra(int src, vector<vector<pair<int, int>>>&adj, int v){
    vector<int>dist(v, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[src] = 0;
    pq.push({0,src});
    while(!pq.empty()){
        int currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if(currDist>dist[node]){
            continue;
        }
        for(auto edge:adj[node]){
            int nbr= edge.first;
            int weight = edge.second;

            if(dist[node]+weight<dist[nbr]){
                dist[nbr] = dist[node] + weight;
                pq.push({dist[nbr],nbr});
            }
        }
    }

    //traversal
    for(int i=0; i<v; i++){
        cout<<"Distance from "<<src<<" to "<<i<<" = ";
        if(dist[i]==INT_MAX) cout<<"INT\n";
        else cout<<dist[i]<<endl;
    }
}

int main(){
    int v=5;
    
    vector<vector<pair<int,int>>>adj(v);
    adj[0].push_back({1,2});
    adj[1].push_back({0,2});

    adj[0].push_back({2,4});
    adj[2].push_back({0,4});

    adj[1].push_back({2,1});
    adj[2].push_back({1,1});

    adj[1].push_back({3,7});
    adj[3].push_back({1,7});

    adj[2].push_back({4,3});
    adj[4].push_back({2,3});

    dijkstra(0,adj,v);

    return 0;
}