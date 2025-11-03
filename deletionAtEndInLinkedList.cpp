#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Deletion at the end
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

    // Print the linked list after deletion
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    return 0;
}