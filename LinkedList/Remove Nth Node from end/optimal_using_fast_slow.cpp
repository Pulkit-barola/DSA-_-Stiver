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


Node* deleteNthNodeFromEnd(Node* head, int n) {
         Node* fast = head;
    Node* slow = head;

    // Step 1: Move fast pointer n steps ahead
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // Step 2: If fast becomes NULL, that means we have to delete the head node
    if (fast == NULL) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    // Step 3: Move both pointers until fast->next becomes NULL
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    // Step 4: Delete the node after slow
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;

    return head;
}
// Main function
int main() {
    vector<int> arr = {1, 0, 2, 1, 0, 2, 1};
    int n;
    cout<<" Enter the n node from user";
    cin>>n;
    Node* head = createLinkedList(arr);

    cout << "Original list: ";
    printList(head);

    head = deleteNthNodeFromEnd(head,n);

    cout << "Delete node fromend is "<<n<<endl;
    printList(head);

    return 0;
}
