#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Reverse full linked list
Node* ReverseList(Node* head) {
    Node* temp = head;
    Node* prev = NULL;
    
    while (temp != NULL) {
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

// Get k-th node starting from temp
Node* getknode(Node* temp, int k) {
    k--;
    while (temp != NULL && k > 0) {
        temp = temp->next;
        k--;
    }
    return temp;
}

// Reverse in k-groups
Node* kReverse(Node* head, int k) {
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {

        Node* kthnode = getknode(temp, k);

        if (kthnode == NULL) { 
            if (prev != NULL) prev->next = temp;
            break;
        }

        Node* newnode = kthnode->next;
        kthnode->next = NULL;

        ReverseList(temp);

        if (temp == head) {
            head = kthnode;
        } else {
            prev->next = kthnode;
        }

        prev = temp;
        temp = newnode;
    }

    return head;
}

// Helper print
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example:
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    int k = 3;

    cout << "Original: ";
    printList(head);

    head = kReverse(head, k);

    cout << "Reversed in K groups: ";
    printList(head);

    return 0;
}
