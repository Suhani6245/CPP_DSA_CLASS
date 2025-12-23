#include<iostream>
#include<vector>
using namespace std;

class Heap{
    vector<int>heapArr;
    public:
    Heap(vector<int>&arr){
        heapArr=arr;
    }

    void heapifyUP(int i){   //bottom to up
        while(i>1){
            int parent = i/2;
            if(heapArr[parent]<heapArr[i]){ 
            swap(heapArr[parent], heapArr[i]);
            i=parent;
            }
            else break;
        }
    }
    
    void heapifyDown(int i){ //up to bottom
        int n=heapArr.size()-1;
        while(2*i<=n){
            int left=2*i;
            int right=2*i+1;
            int largest = left;
            if(right<=n && heapArr[right]>heapArr[left]) largest=right;
            if(heapArr[i]<heapArr[largest]){
                swap(heapArr[i],heapArr[largest]);
                i=largest;
            } 
            else break;
        }
    }

    void display(){
        cout<<"Heap Array: ";
        for(int i=0; i<=heapArr.size()-1; i++){
            cout<<heapArr[i]<<" ";
        }
        cout<<endl;
    }

    bool isEmpty(){
        if(heapArr.size()<1){
            cout<<"Heap is empty.";
            return true;
        }
    }

    void heapInsertion(int ele){
        
        heapArr.push_back(ele);
    
        heapifyUP(heapArr.size()-1);
    }

    void heapPop(){
        if(isEmpty()) return;
        heapArr[1] = heapArr.back();
        heapArr.pop_back();
        heapifyDown(1);
    }

    int front(){
        if(isEmpty()) return -1;
        return heapArr[1];
    }



};

int main(){
    int n=6;
    vector<int>arr = {NULL, 10, 8,9,7,2,5};
    Heap heap(arr);
    /*cout<<"Enter element to insert: ";
        cin>>ele;*/
    heap.heapInsertion(1);
    heap.heapInsertion(13);
    heap.heapInsertion(3);
    cout<<"Top element: "<<heap.front()<<endl;
    heap.display();
    heap.heapPop();
    cout<<"Top element: "<<heap.front()<<endl;
    heap.display();

    return 0;
}