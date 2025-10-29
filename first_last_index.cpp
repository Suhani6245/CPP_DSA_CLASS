#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n] = {1,2,3,3,3,4,5};
    int ele = 3;
    int mid = n/2;
    /*if(arr[mid]==ele){
        int firstIndex = mid;
        int lastIndex = mid;
        for(int i=mid-1; i>=0; i--){
            if(arr[i]==ele){
                firstIndex = i;
            }
            else{
                break;
            }
        }
        for(int i=mid+1; i<n; i++){
            if(arr[i]==ele){
                lastIndex = i;
            }
            else{
                break;
            }
        }
        cout<<"First Index: "<<firstIndex<<endl;
        cout<<"Last Index: "<<lastIndex<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }*/
    //Optimized Approach
    //leetcode question 34 approach
    /*class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int first = -1, last = -1;

        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                first = mid;
                r = mid-1; 
            } 
            else if (nums[mid]<target) {
                l=mid + 1;
            } 
            else {
                r=mid - 1;
            }
        }

       
        l = 0;
        r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                last = mid;
                l = mid + 1; 
            } 
            else if (nums[mid] < target) {
                l = mid + 1;
            } 
            else {
                r =mid - 1;
            }
        }

        return {first, last};
    }
};*/

/*class Solution {
    private:
    int first_occ(vector<int> & nums, int target){
        int n=nums.size();
        int left=0, right= n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>=target) right=mid-1;
            else left=mid+1;
        }
        return left;
    }
    int last_occ(vector<int> & nums, int target){
        int n=nums.size();
        int left=0, right= n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]<=target) left=mid+1;
            else right=mid-1;
        }
        return right;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int fo= first_occ(nums, target);
        int lo=last_occ(nums, target);
        if(fo>=n || nums[fo]!=target) return {-1, -1};
        return {fo,lo};
        
    }
};*/

}

