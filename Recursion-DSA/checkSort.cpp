#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> &arr, int n) {  
    // Base case
    if(n==arr.size()-1) return true;
    // Recursive case
    if (arr[n]>arr[n+1]) {
        return false;
    }
    return isSorted(arr, n+1);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    if(isSorted(arr, 0)){
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}