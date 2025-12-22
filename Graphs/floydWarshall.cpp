#include<bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;
void floyd_warshell(vector<vector<int>>&dist, int V){
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][k]+dist[k][j]<dist[i][j])
                dist[i][j] = dist [i][k] + dist[k][j];
            }
        }
    }
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++) if(dist[i][j]==INF) cout<<"dist from "<<i<<"to"<<j<<"is INF"<<endl;
        else cout << "Shortest distance to vertex " << i << " is " << dist[i][j] << endl;
        
    }
}

int main(){
    int V = 5; // Number of vertices
    vector<vector<pair<int,int>>> adj(V);

    // Example graph edges (u, v, weight)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({2, 4});
    adj[2].push_back({0, 4});

    adj[1].push_back({2, 1});
    adj[2].push_back({1, 1});

    adj[1].push_back({3, 7});
    adj[3].push_back({1, 7});

    adj[2].push_back({4, 3});
    adj[4].push_back({2, 3});


    vector<vector<int>>dist(V,vector<int>(V,INF));

    for(int i=0; i<V;i++) dist[i][i]=0;
    for(int i=0;i<V;i++){
        for(auto nbr : adj[i]){
            dist[i][nbr.first] = nbr.second;
        }
    }

    floyd_warshell(dist,V);

    return 0;
}