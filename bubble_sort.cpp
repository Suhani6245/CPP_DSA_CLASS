//TIME COMPLEXITY : best case: O(n) , average case: O(n^2) , worst case: O(n^2)
//SPACE COMPLEXITY : O(1)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {6,5,3,2,4,1,0};
    int n = arr.size();
    cout<<"ORIGINAL ARRAY :"<< endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }  
    /*for(int i = 0; i<n; i++){                   //worst case O(n^2) best case O(n^2)
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }*/
   /*for (int i=0; i<n-1; i++){             //worst case O(n^2) best case O(n^2)
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
   }*/
  /*for(int i=n-1; i>=0; i--){                     //worst case O(n^2) best case O(n^2)
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
  }*/
    for(int i=n-1; i>=0; i--){       //optimised bubble sort : best case O(n), worst case O(n^2)
        int no_of_swaps = 0;
        for(int j=0; j<=i-1; j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                no_of_swaps++;
            }
        }
        if(no_of_swaps==0){
            break;
        }
  }


  /*for (int i = 0; i < n - 1; i++) {
        swapped = false;
        // The last 'i' elements are already in place (sorted)
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then the array 
        // is already sorted, and we can break.
        if (!swapped)
            break;
    }*/
  
    cout<<endl<<"SORTED ARRAY :"<< endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }   
}
