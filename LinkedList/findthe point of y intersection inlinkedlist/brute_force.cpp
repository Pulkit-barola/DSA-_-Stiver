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
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Create intersection between list2 and list1 at given position (1-based index)
void createIntersection(Node* head1, Node* head2, int pos) {
    if (pos == 0) return;

    Node* temp1 = head1;
    int count = 1;

    // Move to the pos-th node of list1
    while (count < pos && temp1 != nullptr) {
        temp1 = temp1->next;
        count++;
    }

    // Move temp2 to end of list2
    Node* temp2 = head2;
    while (temp2->next != nullptr)
        temp2 = temp2->next;

    // Link end of list2 to pos in list1
    temp2->next = temp1;
}

// Brute force intersection check
Node* intersectionPresent(Node* head1, Node* head2) {
    while (head2 != nullptr) {
        Node* temp = head1;
        while (temp != nullptr) {
            if (temp == head2)
                return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    return nullptr;
}

int main() {
    // Create List 1 using reference-style method
    vector<int> arr1 = {1, 3, 1, 2, 4};
    Node* head1 = createLinkedList(arr1);

    // Create List 2
    vector<int> arr2 = {3, 7};
    Node* head2 = createLinkedList(arr2);

    // Automatically create intersection at position 4 (node value = 2)
    createIntersection(head1, head2, 4);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    // Check intersection
    Node* ans = intersectionPresent(head1, head2);

    if (ans == nullptr)
        cout << "No intersection\n";
    else
        cout << "Intersection at node with value: " << ans->data << endl;

    return 0;
}
