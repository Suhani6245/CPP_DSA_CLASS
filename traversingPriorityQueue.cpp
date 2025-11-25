#include<iostream>
#include<queue>
using namespace std;

void traversalInPriorityQueue(priority_queue<int> pq){    //time complexity: O(nlogn) where n is number of elements in priority queue at the time of operation.
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    priority_queue<int> pq; //by default max heap; top() gives the largest element
    pq.push(10);
    pq.push(20);
    pq.push(15);
    traversalInPriorityQueue(pq);
    return 0;
}