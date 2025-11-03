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

    // Print the linked list
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    return 0;
}