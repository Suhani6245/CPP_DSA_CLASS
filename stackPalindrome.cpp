#include<iostream>
#include<stack>    //using STL
using namespace std;


int main(){
    stack<int>stk;
    int arr[5] = {1,2,3,4,1};
    for(int i=0; i<5; i++){
        stk.push(arr[i]);
    }

    bool check= false;

    for(int i=0; i<5; i++){
        if (arr[i] == stk.top()){
            stk.pop();
            check = true;
        }
        else{
            check = false;
            break;
        }
    }

    if(check){cout<<"Stack is palindrome";}
    else{cout<<"Stack is not palindrome";}

    return 0;

}