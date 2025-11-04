#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;


    Node(int data){                //when we write this, we do not need the "head -> data = 10;" step; just write "Node* head = new Node(<data>);"
        this->data = data;
        next = NULL;
        prev = NULL;
    }

    

};


Node* searchNodeByValue(Node* head, int target){
    
    while(head!=NULL){
        if(head->data == target) return head;
        else head = head->next;
    }
    return NULL;
}

void traversal(Node* head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
}

int main(){
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* tail = new Node(40);
    
    head -> prev = NULL;
    head -> next = first;

    first -> prev = head;
    first ->next = second;

    second -> prev = first;
    second ->next = tail;

    tail -> prev = second;
    tail ->next = NULL;

    cout<<"ORIGINAL LIST: ";
    traversal(head);

    
    //insertion at beginning
    
    Node* newNode = new Node(100);
    cout<<"Adding new node with val: "<<newNode->data<<" at beginning"<<endl;
    newNode-> next = head;
    head ->prev = newNode;
    traversal(newNode); 


    //insertion at end

    Node* newNode2 = new Node(200);
    cout<<"Adding new node with val: "<<newNode2->data<<" at end"<<endl;
    tail -> next = newNode2;
    newNode2 ->prev = tail;
    traversal(newNode); 


    //insertion after a node
    int target = 20;
    Node* newNode3 = new Node(-1);
    cout<<"Adding new node with val: "<<newNode3->data<<" after "<<target<<endl;
    //search for target node
    Node* searchedNode = searchNodeByValue(newNode, target);
    //insertion
     if (searchedNode == NULL) {
        cout << "Target node not found!" << endl;
    } else {
        Node* nextNode = searchedNode->next;
        searchedNode->next = newNode3;
        newNode3->prev = searchedNode;
        newNode3->next = nextNode;

        if (nextNode != NULL) {
            nextNode->prev = newNode3;
        } else {
            tail = newNode3; // if inserted at the end
        }
    }
    
    traversal(newNode); 


}