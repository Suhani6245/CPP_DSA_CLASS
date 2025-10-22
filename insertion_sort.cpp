//Insertion Sort Algorithm - worst case O(n^2), average case O(n^2), best case O(n) , space complexity O(1)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,9,6,5,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        /*//using for with if-else
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        } 
        //using for-while
       for(int j=i+1; j<n; j++){
        while(arr[j]<arr[j-1] && j>0){
            swap(arr[j], arr[j-1]);
            j--;
        }
       }*/
      int j=i;
      while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j-1], arr[j]);
        j--;
      }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}