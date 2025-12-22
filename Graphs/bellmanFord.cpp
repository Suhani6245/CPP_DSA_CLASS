#include<iostream>
#include<vector>
#include<climits>
using namespace std;
struct Edge{
    int u,v,w;
};
//tc = O(v+e), s.t = O(v)
void bellmanFord(int v, vector<Edge>&edges, int src){
    vector<int>dist(v, INT_MAX);
    dist[src] = 0;
    for(int i=1; i<=v-1; i++){
        for(auto &e: edges){
            if(dist[e.u]==INT_MAX && dist[e.u]+e.w < dist[e.v]){
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    for(auto &e: edges){
        if(dist[e.u] != INT_MAX && dist[e.u] + e.w < dist[e.v]){
            cout<<"Negative weight cycle detected\n";
            return;
        }
    }
}

int main(){
    int v=5;
    vector<Edge> edges = {
        {0,1,-1},
        {0,2,4},
        {1,2,3},
        {1,3,2},
        {1,4,2},
        {3,2,5},
        {3,1,1},
        {4,3,-3}
    };
    int source = 0;
    bellmanFord(v,edges,source);
    return 0;
}