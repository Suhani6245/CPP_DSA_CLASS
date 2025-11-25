#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main(){         //heap-sort algorithm- TC = O(nlogn) where n is number of elements in priority queue at the time of operation.
    vector<int>arr= {5,6,2,3,9,8};
    int K = 3; // Number of largest elements to find
    /*priority_queue<int> pq(arr.begin(),arr.end()); //max heap
    // for(int i=0; i<arr.size(); i++){
    //     arr[i]=pq.top();
    //     pq.pop();
    // }
    cout<<"Top "<<K<<" largest elements: "    ;
    for(int i=0; i<K; i++){
        //cout<<arr[i]<<" ";
        cout<<pq.top()<<" ";
        pq.pop();
    }*/

    //Optimal approach using min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap; //min heap
    for(int i=0; i<arr.size(); i++){      //time complexity: O(nlogK)
        minHeap.push(arr[i]);
        if(minHeap.size() > K){
            minHeap.pop();
        }
    }
    cout<<"Top "<<K<<" largest elements: "    ;
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
}