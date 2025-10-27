#include <iostream>
using namespace std;

// Define a node for the doubly linked list
struct Node {
    int data;
    Node* prev;  // pointer to previous node
    Node* next;  // pointer to next node
};

// Function to insert a new node after the head
void insertAfterHead(Node* head, int newData) {
    // 1. Create a new node
    Node* newNode = new Node;
    newNode->data = newData;

    // 2. Point the new node’s next to head’s next
    newNode->next = head->next;

    // 3. Set newNode’s prev to head
    newNode->prev = head;

    // 4. If head’s next exists, fix its prev link
    if (head->next != nullptr) {
        head->next->prev = newNode;
    }

    // 5. Finally, link head to newNode
    head->next = newNode;
}

// Function to print the list from start to end
void printList(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Function to print the list from end to start
void printReverse(Node* tail) {
    Node* temp = tail;
    cout << "Reverse: ";
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

int main() {
    // Create two nodes manually
    Node* head = new Node;
    Node* second = new Node;

    head->data = 10;
    head->prev = nullptr;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = nullptr;

    cout << "Before insertion:\n";
    printList(head);

    // Insert a new node after head
    insertAfterHead(head, 15);

    cout << "\nAfter insertion:\n";
    printList(head);

    // To show reverse printing, go to the end (tail)
    Node* tail = second;
    while (tail->next != nullptr) tail = tail->next;

    printReverse(tail);

    return 0;
}
