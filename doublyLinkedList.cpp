#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;


    /*Node(int data){                //when we write this, we do not need the "head -> data = 10;" step; just write "Node* head = new Node(<data>);"
        this->data = data;
        next = NULL;
        prev = NULL;
    }*/

    

};

void traversal(Node* head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* tail = new Node();
    
    head -> prev = NULL;
    head -> data = 10;
    head -> next = first;

    first -> prev = head;
    first -> data = 20;
    first ->next = second;

    second -> prev = first;
    second -> data = 30;
    second ->next = tail;

    tail -> prev = second;
    tail -> data = 40;
    tail ->next = NULL;

    traversal(head);
}