#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
};

void traversal(Node* head){
    
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}

int main(){
    int target = 2;
    Node* head = new Node();       //creating nodes dynamically
    Node* second = new Node();
    Node* tail = new Node();

    head->val = 1;    //assigning values and linking nodes
    head->next = second;

    second->val = 2;
    second->next = tail;

    tail->val = 3;
    tail->next = NULL;

    cout<<"LINKED LIST: "<<endl;
    traversal(head);

    Node* prev = NULL;
    Node* curr = head;
    Node* next= head->next;  
    

    if(!head) cout<<"Empty";
    else{
        while(curr){
            curr->next = prev;
            prev = curr;
            curr = next;
           if(next) next = next->next;
    }
    }
    cout<<"LINKED LIST: "<<endl;
    traversal(head);
    
}