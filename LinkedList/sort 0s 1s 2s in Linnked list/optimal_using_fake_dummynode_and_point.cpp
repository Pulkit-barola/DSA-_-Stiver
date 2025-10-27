#include <bits/stdc++.h>
using namespace std;

// Linked list node definition
struct Node {
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to create linked list from vector
Node* createLinkedList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to sort linked list of 0s, 1s, and 2s
Node* sortList(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    // Dummy heads for three lists
    Node* ZeroHead = new Node(-1);
    Node* OneHead  = new Node(-1);
    Node* TwoHead  = new Node(-1);

    // Tails for three lists (start at dummy)
    Node* Zero = ZeroHead;
    Node* One  = OneHead;
    Node* Two  = TwoHead;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            Zero->next = temp;
            Zero = temp;
        }
        else if(temp->data == 1){
            One->next = temp;
            One = temp;
        }
        else { // temp->data == 2
            Two->next = temp;
            Two = temp;
        }
        temp = temp->next;
    }

    // Connect zero list to one list if exists otherwise to two list
    if(OneHead->next != NULL){
        Zero->next = OneHead->next;
    } else {
        Zero->next = TwoHead->next;
    }

    // Connect one list to two list (if any)
    One->next = TwoHead->next; // safe to do even if OneHead->next was NULL

    // Terminate final list
    Two->next = NULL;

    // New head is next of ZeroHead (could be zero, or one, or two head start)
    Node *newhead = ZeroHead->next;

    // free dummy nodes
    delete ZeroHead;
    delete OneHead;
    delete TwoHead;

    return newhead;
}
// Main function
int main() {
    vector<int> arr = {1, 0, 2, 1, 0, 2, 1};

    Node* head = createLinkedList(arr);

    cout << "Original list: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}
