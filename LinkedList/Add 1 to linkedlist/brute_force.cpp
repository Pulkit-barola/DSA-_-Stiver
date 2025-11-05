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

Node * reverseLL(Node * head){
    Node * temp = head;
    Node * prev = nullptr;
    while(temp != nullptr){
        Node * front = temp -> next;
        temp ->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node * Add1ToLL(Node * head){
    head = reverseLL(head);
    Node * temp = head;
    int carry = 1;
    while(temp != nullptr){
        temp->data = temp->data+carry;
        if(temp->data<10){
            carry = 0;
            break;
        }else{
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }


    if (carry == 1) {
        Node* newNode = new Node(1);
        head = reverseLL(head);
        newNode->next = head;
        return newNode;
    }

    // Step 4: Reverse again to restore original order
    head = reverseLL(head);
    return head;
}

int main() {
    // Example: number = 999 represented as LinkedList
    vector<int> nums = {9, 9, 9};
    Node* head = createLinkedList(nums);

    cout << "Original number: ";
    printList(head);

    head = Add1ToLL(head);

    cout << "After adding 1: ";
    printList(head);

    return 0;
}