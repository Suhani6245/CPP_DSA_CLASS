#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
};

void traversalInHeaderLL(Node* head){
    Node* temp = head;
    do{
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    while(temp!=head);
}

int main(){
    Node* head = new Node();       //creating nodes dynamically
    Node* second = new Node();
    Node* tail = new Node();

    head->val = 1;    //assigning values and linking nodes
    head->next = second;

    second->val = 2;
    second->next = tail;

    tail->val = 3;
    tail->next = head;

    cout<<"Traversing Header Linked List: ";
    traversalInHeaderLL(head);
    return 0;
}
