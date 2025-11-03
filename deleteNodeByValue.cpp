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

Node* deleteFromEnd(Node* head){
    if(head == nullptr){
        cout << "List is empty, nothing to delete." << endl;
    } else if(head->next == nullptr){
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
}


Node* deleteNodeFromBeginning(Node* head) {
    Node* temp = head->next;
    head->next = NULL;
    delete head;
    return temp;
}

Node* deleteNodeByValue(Node* head, int target) {
    if(!head) return NULL;

    //search the target
    Node* prev = new Node();
    prev->val = -1;
    prev->next = head;
    Node* curr=head;
    while(curr!=NULL && curr->val!=target){
        prev = prev->next;
        curr = curr->next;
    }

    //check if target node is head, use delete from beginning function
    if(curr==head) return deleteNodeFromBeginning(head);

    //check if target node is tail, use delete from end
    if(curr->next==NULL) return deleteFromEnd(head);

    prev->next = curr->next;
    curr->next=NULL;
    delete curr;
    return head;
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
    

    cout<<"Original Linked List: ";
    traversal(head);
    cout<<endl;
    
    deleteNodeByValue(head, target);

    cout<<"Linked List After Deletion: ";
    traversal(head);
    
}