#include<iostream>
// Hare and Tortoise Algorithm to detect cycle in a linked list
//COMPLEXITY ANALYSIS:
//Time Complexity: O(N) where N is the number of nodes in the linked list
//Space Complexity: O(1) as we are using only constant space

using namespace std;
struct Node{      //defining a node
    int val;
    Node* next;    //Node* is a datatype that points to another node
};
bool isCycle(Node* head){                      //time complexity O(N), space complexity O(1)
    if(head==NULL || head->next==NULL) return false;
    Node* hare=head;
    Node* tortoise=head;
    while(hare!=NULL && hare->next!=NULL){
        hare=hare->next->next;
        tortoise=tortoise->next;
        if(hare==tortoise){
            cout<<"Cycle detected"<<endl;
            return true;
        }
    }
    return false;
}
int main(){
    Node* head = new Node();       //creating nodes dynamically
    Node* second = new Node();
    Node* third = new Node();

    head->val = 10;    //assigning values and linking nodes
    head->next = second;

    second->val = 20;
    second->next = third;

    third->val = 30;
    third->next = head; // Creating a cycle for testing

    if(isCycle(head)){
        cout<<"Cycle Present"<<endl;
    }
    else{
        cout<<"No Cycle Present"<<endl;
    }

    return 0;
}