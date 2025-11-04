#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void traversal(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* tail = new Node(40);
    
    head->next = first;

    first->prev = head;
    first->next = second;

    second->prev = first;
    second->next = tail;

    tail->prev = second;

    cout << "Original Linked List: ";
    traversal(head);

    // Deletion from beginning
    Node* temp = head;
    head = head->next;      // move head forward
    head->prev = NULL;      // new head has no prev
    delete temp;

    cout << "Linked List after deleting first node: ";
    traversal(head);

    // Deletion from end
    Node* lastTemp = tail;
    tail = tail->prev;      // move tail backward
    tail->next = NULL;      // new tail has no next
    delete lastTemp;

    cout << "Linked List after deleting last node: ";
    traversal(head);
}
