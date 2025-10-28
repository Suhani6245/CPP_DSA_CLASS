#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void traversal(Node* head){
    cout<<"LINKED LIST: "<<endl;
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node* head = new Node;
    Node* tail = NULL;
    head = tail = NULL;
    for(int i=0; i<5; i++){
        Node*node = new Node;
        int n;
        cin>>n;
        node->data = n;
        if(head==NULL){
            head = tail = node;
        }
        else{
            tail->next = node;
            tail= tail->next;
        }
    }
    traversal(head);
}