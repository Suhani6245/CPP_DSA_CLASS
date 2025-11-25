#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main(){
    //Brute force approach - sort the array and return the kth largest element
    /*vector<int> arr= {1,2,3,5,1,7,6};
    cout<<"Array elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=3;
    sort(arr.begin(), arr.end());
    cout<<k<<"th largest element is: "<<arr[arr.size()-k];*/

    //using max-heap
    /*vector<int> arr= {1,2,3,5,1,7,6};
    int k = 3;
    cout<<"Array elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int> maxHeap(arr.begin(),arr.end());
    for(int i=1;i<=k-1;i++){
        maxHeap.pop();
    }
    cout<<endl;
    cout<<k<<"th largest element: "<<maxHeap.top();*/



    //using min-heap
    /*vector<int> arr= {1,2,3,5,1,7,6};
    int k = 3;
    cout<<"Array elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int,vector<int>,greater<int>> minHeap;
    
    for(int i=0; i<arr.size(); i++){
        minHeap.push(arr[i]);      //time complexity: O(nlogK)
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    cout<<endl;
    cout<<k<<"th largest element: "<<minHeap.top();*/


    //something
    /*vector<int> arr= {1,2,3,5,1,7,6};
    int k = 2;
    cout<<"Array elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int,vector<int>,greater<int>> minHeap(arr.begin(),arr.end());
    // for(int i=1;i<=arr.size()-k;i++){
    //     minHeap.pop();
    // }
    for(int i=0; i<arr.size(); i++){    //time complexity: O(nlogK)
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    cout<<endl;
    cout<<k<<"th largest element: "<<minHeap.top();*/


    //MOST Optimal approach
    //using min-heap - T.C: O(k + (n-k)logk)   S.P = O(k) 
    //- create a minheap of first k elements of array. then compare the top of queue with the elements(i>k) of the array. if top<currElement then pop the top and push the currElement
    vector<int> arr= {1,2,3,5,1,7,6};
    int k = 1;
    cout<<"Array elements are: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int,vector<int>,greater<int>> minHeap(arr.begin(),arr.begin()+k);
    
    for(int i=k; i<arr.size(); i++){   
        if(arr[i]>minHeap.top()){
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }
    cout<<endl;
    cout<<k<<"th largest element: "<<minHeap.top();
    return 0;

}
