//minimum stack - implement a stack that supports push, pop, and retrieving the minimum element in constant time O(1).

#include<iostream>
#include<stack>
using namespace std;
class Stack {
    stack<int> mainStack;
    stack<int> minStack;

    public:
    void push(int x) {
        mainStack.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if(mainStack.top()==minStack.top()){
            minStack.pop();
        }
        mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMin() {
        return minStack.top();
    }

};

int main(){
    Stack s;
    s.push(1);
    s.push(4);
    s.push(0);
    s.push(9);
    s.pop();
    cout<<"Minimun: "<<s.getMin()<<endl;
    s.pop();
    s.push(-1);
    cout<<"Minimum: "<<s.getMin()<<endl; 
    s.push(10);
    cout<<"Top Element: "<<s.top();

    return 0;
}