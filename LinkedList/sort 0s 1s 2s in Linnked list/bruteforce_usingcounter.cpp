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
Node* sortList(Node* head) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    Node* temp = head;

    // Count number of 0s, 1s, and 2s
    while (temp != nullptr) {
        if (temp->data == 0) cnt0++;
        else if (temp->data == 1) cnt1++;
        else cnt2++;
        temp = temp->next;
    }

    // Assign values in sorted order
    temp = head;
    while (temp != nullptr) {
        if (cnt0 > 0) {
            temp->data = 0;
            cnt0--;
        }
        else if (cnt1 > 0) {
            temp->data = 1;
            cnt1--;
        }
        else {
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }

    return head;
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
