#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// ✅ Create linked list from vector
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

// ✅ Print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ✅ Create intersection between list2 and list1 at given position (1-based)
void createIntersection(Node* head1, Node* head2, int pos) {
    if (pos == 0) return;

    Node* temp1 = head1;
    int count = 1;
    while (count < pos && temp1 != NULL) {
        temp1 = temp1->next;
        count++;
    }

    Node* temp2 = head2;
    while (temp2->next != NULL)
        temp2 = temp2->next;

    temp2->next = temp1;
}

// ✅ ✅ Striver’s Optimal Method (Two Pointer Switching)
Node* findIntersection(Node* firstHead, Node* secondHead) {
    if (firstHead == NULL || secondHead == NULL)
        return NULL;

    Node* temp1 = firstHead;
    Node* temp2 = secondHead;

    while (temp1 != temp2) {
        temp1 = temp1->next;
        temp2 = temp2->next;
        if(temp1 == temp2){
            return temp1;
        }
        if (temp1 == NULL) temp1 = secondHead;
        if(temp2 == NULL) temp2  = firstHead;
    }

    return nullptr;  // Intersection node OR NULL
}

// ✅ MAIN FUNCTION 
int main() {
    // Create two linked lists
    vector<int> arr1 = {1, 3, 1, 2, 4};
    vector<int> arr2 = {3, 7};

    Node* head1 = createLinkedList(arr1);
    Node* head2 = createLinkedList(arr2);

    // Create intersection at position 4 (node value = 2)
    createIntersection(head1, head2, 4);

    cout << "List 1: ";
    printList(head1);
    cout << "List 2: ";
    printList(head2);

    Node* intersection = findIntersection(head1, head2);

    if (intersection)
        cout << "Intersection at node with value: " << intersection->data << endl;
    else
        cout << "No intersection found" << endl;

    return 0;
}
