#include<iostream>
//complexity: time O(1), space O(1)
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
void insertAtMiddle(Node* head, Node* target, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = target->next;
    target->next = newNode;
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

    insertAtMiddle(head,second, 25);

    cout << "Linked List after insertion: ";
    ll_traversal(head);

    // Free allocated memory
    /*delete head;
    delete second;
    delete tail;*/

    return 0;
}
