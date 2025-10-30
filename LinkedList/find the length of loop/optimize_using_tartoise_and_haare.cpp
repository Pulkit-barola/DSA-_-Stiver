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

int findlength(Node*slow , Node*fast){
    int cnt = 1;
    fast = fast->next;
    while(slow!=fast){
        cnt++;
        fast = fast->next;
    }
    return cnt;
}

int lengthofloop(Node * head){
    Node*slow = head;
    Node*fast = head;
    while(fast != nullptr && fast -> next!=nullptr){
        slow = slow -> next;
        fast  = fast ->next ->next;

        if(slow == fast){
            int ans =  findlength(slow,fast);
            return ans;
        }
    }
    return 0;
}

int main() {
 Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Linking the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Creating a loop from fifth to second
    fifth->next = second;

    // Getting the loop length
    int loopLength = lengthofloop(head);

    // Printing the result
    if (loopLength > 0) {
        cout << "Length of the loop: "
             << loopLength << endl;
    } else {
        cout << "No loop found in the linked list."
             << endl;
    }

    return 0;

}
