#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Basic deque operations -- TC = O(1) for ALL
    deque<int>dq;
    dq.push_back(30);
    dq.push_front(200);
    dq.push_back(10);
    dq.push_front(90);
    cout<<"Size: "<<dq.size()<<endl;
    if(dq.empty()) cout<<"Deque empty.";
    else cout<<"Deque not empty.";
    cout<<endl;
    dq.pop_back();
    cout<<"Front: "<<dq.front()<<", Back: "<<dq.back()<<endl;
    dq.pop_front();
    cout<<"Front: "<<dq.front()<<", Back: "<<dq.back()<<endl;
    cout<<"Size: "<<dq.size()<<endl;
    dq.pop_back();
    dq.pop_front();
    if(dq.empty()) cout<<"Deque empty.";
    else cout<<"Deque not empty";

}