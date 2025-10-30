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

Node*  DetectLoop(Node * head){
    Node * temp = head;
    unordered_map<Node* , int>mpp;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return nullptr;
}

int main() {
    // 1️⃣ Case 1: Normal linked list (no loop)
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9};
    Node* head1 = createLinkedList(arr1);

    cout << "Case 1 - Normal List: ";
    printList(head1);

    Node* loopStart1 = DetectLoop(head1);
    if (loopStart1)
        cout << "Loop starts at node with value: " << loopStart1->data << endl;
    else
        cout << "No loop detected " << endl;

    cout << "\n------------------------------------\n";

    // 2️⃣ Case 2: Linked list with a loop
    vector<int> arr2 = {10, 20, 30, 40, 50};
    Node* head2 = createLinkedList(arr2);

    // Create a loop manually: connect last node to node with value 30
    Node* temp = head2;
    Node* loopStart = nullptr;
    while ( temp ->next != nullptr) {
        if (temp->data == 30) loopStart = temp;
        temp = temp->next;
    }
    temp->next = loopStart; // create the loop

    cout << "Case 2 - List with a loop created manually.\n";

     Node* loopNode = DetectLoop(head2);
    if (loopNode)
        cout << "Loop starts at node with value: " << loopNode->data << endl;
    else
        cout << "No loop detected ❌" << endl;

    cout << "\n------------------------------------\n";

    return 0;

}
