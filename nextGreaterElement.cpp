#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextGreater(vector<int>&arr){
    int n = arr.size();
    vector<int> result(n);
    stack<int> s; // stack to keep track of next greater elements

    for(int i=n-1; i>=0; i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
        if(!s.empty()){
            result[i] = s.top();
        }
        else result[i] = -1;
        s.push(arr[i]);
    }
    return result;
}

int main(){
    vector<int> arr = {4, 5, 2, 25};
    cout<<"Original array Elements: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    vector<int> res = nextGreater(arr);
    cout<<"Next Greater Elements: "<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}