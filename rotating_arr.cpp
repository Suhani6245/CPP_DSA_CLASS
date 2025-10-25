#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for(int i=0; i<n/2; i++){            
        swap(arr[i], arr[n-i-1]);
    }
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int k = 2; //number of rotations
    for(int i=0; i<k; i++){
        

    }
    cout<<endl;
    return 0;
}