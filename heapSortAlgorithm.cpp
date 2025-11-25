#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main(){         //heap-sort algorithm- TC = O(nlogn) where n is number of elements in priority queue at the time of operation.
    vector<int>arr= {5,6,2,3,9,8};
    cout<<"Before sorting: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),arr.end()); //min heap
    for(int i=0; i<arr.size(); i++){
        arr[i]=pq.top();
        pq.pop();
    }
    cout<<"\nAfter sorting: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}