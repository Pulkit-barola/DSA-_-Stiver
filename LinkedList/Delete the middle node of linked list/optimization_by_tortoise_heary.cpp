#include <bits/stdc++.h>
using namespace std;

// ---------------------------
// Node definition
// ---------------------------
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// ---------------------------
// Create Linked List from vector
// ---------------------------
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

// ---------------------------
// Print Linked List
// ---------------------------
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// ---------------------------
// Delete Middle Node Function
// ---------------------------
Node* deleteMiddle(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // No manual delete; avoid double free
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    // Delete the middle node
    prev->next = slow->next;
    delete slow;
    return head;
}

// ---------------------------
// Main function for testing
// ---------------------------
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = createLinkedList(arr);

    cout << "Original List: ";
    printList(head);

    head = deleteMiddle(head);

    cout << "After Deleting Middle Node: ";
    printList(head);

    // Free remaining memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
