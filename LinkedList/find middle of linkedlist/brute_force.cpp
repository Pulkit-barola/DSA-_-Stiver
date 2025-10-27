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

Node * MiddleLinkedList(Node * head){
    Node * temp  = head;
    int cnt = 0;
    while(temp != nullptr){
        cnt++;
        temp = temp->next;
    }
    int  MiddleNode = (cnt/2)+1;
    temp = head;
    while(temp!=nullptr){
        MiddleNode = MiddleNode - 1;
        if(MiddleNode == 0){
            break;
        }
        temp = temp->next;
    }
    return temp;
}

int main() {
    vector<int> arr = {7, 8, 2, 1, 3, 5, 9};
    Node* head = createLinkedList(arr);

    cout << "Original list: ";
    printList(head);

    Node*middle= MiddleLinkedList(head);
    if (middle != nullptr) {
        cout << "Middle element: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }


    return 0;
}
