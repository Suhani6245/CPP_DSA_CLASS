//Logic: push elements from array to deque and then pop one by one only if elements from back and front are same; at last if empty then palindrome else not palindrome - TC = O(N)
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void checkPalindrome(vector<int>&arr){
    deque<int>dq(arr.begin(),arr.end());
    while(!dq.empty()){
        if(dq.front()==dq.back()){
            dq.pop_front();
            dq.pop_back();
        }
        else break;
    }
    
    cout<<"Given array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }

    if(dq.empty()){cout<<"\nThe Array is Palindrome"<<endl;}
    else cout<<"\nThe Array is Not palindrome"<<endl;
}

int main(){
    vector<int>num1 = {1,2,2,1};     //palindrome
    vector<int>num2 = {1,2,3,4};    //not palindrome

    checkPalindrome(num1);
    checkPalindrome(num2);
    return 0;
}