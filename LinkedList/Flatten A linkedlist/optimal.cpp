#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* child;

    Node() : data(0), next(nullptr), child(nullptr) {}
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node* nxt, Node* ch) : data(x), next(nxt), child(ch) {}
};

Node* mergeList(Node* a, Node* b) {
    Node* dummy = new Node(-1);
    Node* curr = dummy;

    while (a && b) {
        if (a->data < b->data) {
            curr->child = a;
            a = a->child;
        } else {
            curr->child = b;
            b = b->child;
        }
        curr = curr->child;
        curr->next = nullptr;
    }

    if (a != nullptr) {
    curr->child = a;
} else {
    curr->child = b;
}


    return dummy->child;
}

Node* flatten(Node* head) {
    if (!head || !head->next) return head;

    Node* rest = flatten(head->next);
    head = mergeList(head, rest);

    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->child;
    }
    cout << "\n";
}

void printGrid(Node* head, int depth = 0) {
    while (head) {
        cout << head->data;

        if (head->child) {
            cout << " -> ";
            printGrid(head->child, depth + 1);
        }

        if (head->next) {
            cout << "\n";
            for (int i = 0; i < depth; i++) cout << "| ";
        }

        head = head->next;
    }
}

int main() {
    Node* head = new Node(5);
    head->child = new Node(14);

    head->next = new Node(10);
    head->next->child = new Node(4);

    head->next->next = new Node(12);
    head->next->next->child = new Node(20);
    head->next->next->child->child = new Node(13);

    head->next->next->next = new Node(7);
    head->next->next->next->child = new Node(17);

    cout << "Original Linked List:\n";
    printGrid(head);

    Node* flat = flatten(head);
    cout << "\n\nFlattened List: ";
    printList(flat);

    return 0;
}
