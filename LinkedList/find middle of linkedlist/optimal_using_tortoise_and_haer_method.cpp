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

Node * MiddleLinkedList(Node * head){
    Node * slow = head;
    Node * Fast = head;

    while(Fast != nullptr && Fast->next != nullptr){
        slow = slow->next;
        Fast = Fast->next->next;
    }
    return slow;
}

int main() {
    vector<int> arr = {7, 8, 2, 1, 3, 5, 9};
    Node* head = createLinkedList(arr);

    cout << "Original list: ";
    printList(head);

    Node*middle= MiddleLinkedList(head);
    if (middle != nullptr) {
        cout << "Middle element: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }


    return 0;
}
