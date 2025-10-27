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

// reverse the linked list()
Node * ReverseList(Node * head){
    Node * temp = head;
    stack<int>st;
    while(temp!=nullptr){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp!=nullptr){
        temp->data = st.top();
        st.pop();
        temp= temp->next;
    }
    return head;
}
// Main function
int main() {
    cout<<"Before Reversing the array"<<endl;
    vector<int> arr = {5,2,7,8,1};
    Node* head = createLinkedList(arr);

    cout << "Original list: ";
    printList(head);

    head = ReverseList(head);

    cout << "after reverse the array ";
    printList(head);

    return 0;
}
