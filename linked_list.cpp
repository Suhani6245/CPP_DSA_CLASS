#include<iostream>
using namespace std;
struct Node{      //defining a node
    int val;
    Node* next;    //Node* is a datatype that points to another node
};
void ll_traversal(Node* head){            //function to traverse the linked list
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    Node* head = new Node();       //creating nodes dynamically
    Node* second = new Node();
    Node* tail = new Node();

    head->val = 10;    //assigning values and linking nodes
    head->next = second;

    second->val = 20;
    second->next = tail;

    tail->val = 30;
    tail->next = NULL;

    ll_traversal(head);

    // Free allocated memory
    /*delete head;
    delete second;
    delete tail;*/

    return 0;
}