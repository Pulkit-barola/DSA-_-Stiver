#include<bits/stdc++.h>
using namespace std;

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

Node* findNthNode(Node* temp, int k) {
    int cnt = 1;
    while (temp != NULL) {
        if (cnt == k) return temp;
        cnt++;
        temp = temp->next;
    }
    return temp;
}
    Node* rotate(Node* head, int k) {
        if (head == NULL || k == 0) return head;

    Node* tail = head;
    int len = 1;
    while (tail->next != NULL) {
        tail = tail->next;
        len += 1;
    }

    if (k % len == 0) return head;
    k = k % len;

    // attach the tail to the head (make it circular)
    tail->next = head;

    // find the new last node (len - k)th node
    Node* newLastNode = findNthNode(head, len - k);

    head = newLastNode->next;
    newLastNode->next = NULL;

    return head;
    }

int main() {
     Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;
    head = rotate(head, k);
    printList(head);
    return 0;
}