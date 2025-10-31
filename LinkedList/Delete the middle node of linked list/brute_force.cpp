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

// Delete middle node (1-based index, deletes second middle if even)
Node* deleteMiddle(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    // Count total nodes
    int cnt = 0;
    Node* temp = head;
    while (temp != nullptr) {
        cnt++;
        temp = temp->next;
    }

    // Middle position (1-based, second middle if even)
    int mid = cnt / 2 + 1;

    // Traverse to node before middle
    temp = head;
    for (int i = 1; i < mid - 1; i++) {
        temp = temp->next;
    }

    // Delete middle node safely
    Node* delNode = temp->next;
    if (delNode != nullptr) {
        temp->next = delNode->next;
        delete delNode;
    }

    return head;
}

int main() {
    vector<int> arr = {1, 3, 4, 7, 1, 2, 6};
    Node* head = createLinkedList(arr);

    cout << "Original list: ";
    printList(head);

    head = deleteMiddle(head);

    cout << "After deleting middle: ";
    printList(head);

    return 0;
}
