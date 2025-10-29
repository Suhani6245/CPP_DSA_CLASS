#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void ll_traversal(Node* head){            //function to traverse the linked list
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
//function to insert a node after a given node
Node* deleteNode(Node* head){
    Node* temp = head->next;
    head->next = NULL;
    delete head;
    return temp;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* tail = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = tail;

    tail->data = 30;
    tail->next = NULL;

    cout << "Original Linked List: ";
    ll_traversal(head);

    head = deleteNode(head);

    cout << "Linked List after deletion: ";
    ll_traversal(head);

    return 0;
}
