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

bool  DetectLoop(Node * head){
    Node * temp = head;
    unordered_map<Node* , int>mpp;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return true;
        }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return false;
}

int main() {
    // 1️⃣ Case 1: Normal linked list (no loop)
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9};
    Node* head1 = createLinkedList(arr1);

    cout << "Case 1 - Normal List: ";
    printList(head1);
    if (DetectLoop(head1)) cout << "Loop detected ✅" << endl;
    else cout << "No loop detected ❌" << endl;

    cout << "\n------------------------------------\n";
}
