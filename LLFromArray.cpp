#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to create linked list from array
Node* createFromArray(int arr[], int n) {
    if(n == 0) return NULL;

    Node* head = new Node{arr[0], NULL};
    Node* temp = head;

    for(int i = 1; i < n; i++) {
        temp->next = new Node{arr[i], NULL};
        temp = temp->next;
    }

    return head;
}

void display(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n = 5;
    /*cout << "Enter size: ";
    cin >> n;*/

    int arr[n] = {10, 20, 30, 40, 50};
    /*cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    */


    Node* head = createFromArray(arr, n);

    cout << "Linked List: ";
    display(head);
}
