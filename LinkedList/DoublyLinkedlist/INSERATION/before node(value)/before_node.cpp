#include <bits/stdc++.h>
using namespace std;

// 🔹 Doubly Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node* back;

    // Constructor
    Node(int data1, Node* next1 = NULL, Node* back1 = NULL) {
        data = data1;
        next = next1;
        back = back1;
    }
};

// 🔹 Convert array to Doubly Linked List
Node* convertArr2DLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], NULL, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// 🔹 Print Doubly Linked List
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// 🔹 Insert Before a Given Node
void insertBeforeNode(Node* node, int val) {
    Node* prev = node->back;                     // Step 1: Get the node before the current node
    Node* newNode = new Node(val, node, prev);   // Step 2: Create a new node with val, next=node, back=prev
    prev->next = newNode;                        // Step 3: Update previous node's next
    node->back = newNode;                        // Step 4: Update current node's back
}

// 🔹 MAIN FUNCTION
int main() {
    vector<int> arr = {12, 5, 8, 7};

    // Step 1: Convert array to Doubly Linked List
    Node* head = convertArr2DLL(arr);

    cout << "Original DLL: ";
    print(head);

    // Step 2: Insert 100 before the 2nd node (head->next = node 5’s next → 8)
    insertBeforeNode(head->next->next, 100);

    cout << "After inserting 100 before 8: ";
    print(head);

    return 0;
}
