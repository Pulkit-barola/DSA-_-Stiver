#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* child;

    Node(int d) {
        data = d;
        next = nullptr;
        child = nullptr;
    }
};

// ----------------------------
// Flatten Function
// ----------------------------
Node* flatten(Node* head) {
    if (head == nullptr) return nullptr;

    vector<int> arr;

    // Extract all data (next + child chains)
    Node* temp = head;
    while (temp != nullptr) {
        Node* t2 = temp;
        while (t2 != nullptr) {
            arr.push_back(t2->data);
            t2 = t2->child;
        }
        temp = temp->next;
    }

    // Sort the collected values
    sort(arr.begin(), arr.end());

    // Build new flattened list using child pointer
    Node* newHead = new Node(arr[0]);
    Node* curr = newHead;

    for (int i = 1; i < arr.size(); i++) {
        curr->child = new Node(arr[i]);
        curr = curr->child;
    }

    return newHead;
}

// ----------------------------
// Print Flattened List
// ----------------------------
void printChildList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
}

// ----------------------------
// MAIN
// ----------------------------
int main() {

    // Building a multilevel list manually
    Node* head = new Node(5);
    head->child = new Node(7);
    head->child->child = new Node(8);

    head->next = new Node(10);
    head->next->child = new Node(20);

    head->next->next = new Node(19);
    head->next->next->child = new Node(22);
    head->next->next->child->child = new Node(50);

    // Flatten
    Node* flat = flatten(head);

    // Print flattened list
    printChildList(flat);

    return 0;
}
