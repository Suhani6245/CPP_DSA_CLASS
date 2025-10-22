//selection sort - time complexity O(n^2) in every case, space complexity O(1)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,5,6,7,3,0,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n-1; i++){
        int min_ind=i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
    cout<<"Sorted array: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}