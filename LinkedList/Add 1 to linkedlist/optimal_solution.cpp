#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Create linked list from vector
Node* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to handle recursion and carry propagation
int helper(Node* temp) {
    // Base case: if we reach the end, return carry = 1 (for adding 1)
    if (temp == nullptr)
        return 1;

    // Recursive call till the last node
    int carry = helper(temp->next);

    // Add carry to current node data
    temp->data = temp->data + carry;

    // If after addition, data < 10 → no more carry
    if (temp->data < 10)
        return 0; // carry = 0

    // Else, make data = 0 and propagate carry = 1
    temp->data = 0;
    return 1;
}

// Function to add 1 to linked list
Node* addOne(Node* head) {
    int carry = helper(head);

    // If carry is still left, create new node at head
    if (carry == 1) {
        Node* newNode = new Node(1);
        newNode->next = head;
        return newNode;
    }
    return head;
}

int main() {
    // Example: number = 999 represented as LinkedList
    vector<int> nums = {9, 9, 9};
    Node* head = createLinkedList(nums);

    cout << "Original number: ";
    printList(head);

    head = addOne(head);

    cout << "After adding 1: ";
    printList(head);

    return 0;
}