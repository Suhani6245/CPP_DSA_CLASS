#include <iostream>
#include <vector>
using namespace std;

// helper function to reverse elements between l and r
void reverse_arr(vector<int>& nums, int l, int r) {
    while (l < r) {
        swap(nums[l], nums[r]);
        l++;
        r--;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; // number of rotations
    /*cout<<"enter value of k:";
    cin>>k;
    cout<<endl;
    */
    //print og array
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    cout<<"Rotating the array by " << k << " positions." << endl;

    int n = nums.size();
    k = k % n; // handle cases where k > n

    // reverse the whole array
    reverse_arr(nums, 0, n - 1);
    // reverse first k elements
    reverse_arr(nums, 0, k - 1);
    // reverse remaining elements
    reverse_arr(nums, k, n - 1);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
