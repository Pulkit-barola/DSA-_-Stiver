#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

// Create list from vector
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

// Print list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// ✅ Method 2: Intersection using Length Difference
Node* getIntersection(Node* head1, Node* head2) {
    // Find lengths
    int n1 = 0, n2 = 0;

    Node* t1 = head1;
    Node* t2 = head2;

    while (t1 != nullptr) {
        n1++;
        t1 = t1->next;
    }
    while (t2 != nullptr) {
        n2++;
        t2 = t2->next;
    }

    // Reset pointers
    t1 = head1;
    t2 = head2;

    // Move the longer list ahead
    int diff = abs(n1 - n2);

    if (n1 > n2) {
        while (diff--) t1 = t1->next;
    } else {
        while (diff--) t2 = t2->next;
    }

    // Move both pointers until they meet
    while (t1 != nullptr && t2 != nullptr) {
        if (t1 == t2) return t1;
        t1 = t1->next;
        t2 = t2->next;
    }

    return nullptr;
}

// Create intersection at position (for testing)
void createIntersection(Node* head1, Node* head2, int pos) {
    if (pos == 0) return;

    Node* temp1 = head1;
    int count = 1;

    while (count < pos && temp1 != nullptr) {
        temp1 = temp1->next;
        count++;
    }

    Node* temp2 = head2;
    while (temp2->next != nullptr)
        temp2 = temp2->next;

    temp2->next = temp1;  // actual intersection
}

int main() {
    vector<int> arr1 = {1, 3, 1, 2, 4};
    vector<int> arr2 = {3, 7};

    Node* head1 = createLinkedList(arr1);
    Node* head2 = createLinkedList(arr2);

    // Create intersection at 4th node (value = 2)
    createIntersection(head1, head2, 4);

    cout << "List1: ";
    printList(head1);

    cout << "List2: ";
    printList(head2);

    Node* ans = getIntersection(head1, head2);

    if (ans == nullptr)
        cout << "No intersection\n";
    else
        cout << "Intersection at node value: " << ans->data << endl;

    return 0;
}
