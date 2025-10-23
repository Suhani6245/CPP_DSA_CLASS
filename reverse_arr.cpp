#include<iostream>
#include<vector>
using namespace std;
//using recursion to reverse an array
void reverse(vector<int>&arr, int l, int r){            //time complexity: O(n/2) = O(n), space complexity: O(n) due to recursion stack
    if(r<=l) return;
    swap(arr[l], arr[r]);
    reverse(arr, l+1, r-1);
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    reverse(arr, 0, n-1);
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//reverse array using for loop - time complexity: O(n), space complexity: O(1)

/*int main(){
vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for(int i=0; i<n/2; i++){            
        swap(arr[i], arr[n-i-1]);
    }
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

//reverse array but duplicating array - time complexity: O(n), space complexity: O(n)
/*int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> rev(n);
    for(int i=0; i<n; i++){
        rev[i] = arr[n-i-1];
    }
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<rev[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/