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

int lengthofloop(Node * head){
    Node * temp = head;
    int timer = 1;
    unordered_map<Node* , int>mpp;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return timer-mpp[temp];  

// Jab hum dobara usi node par aaye, to hum dekhte hain:// Pehli baar visit karte waqt timer kya tha → visitedNodes[temp]// Abhi timer kya hai → timer
// In dono ke difference se loop ke nodes ki length milti hai.// (kyunki itne steps ke baad hum same node par phir aa gaye)
        }
        mpp[temp] = timer;
        temp = temp->next;
        timer++;
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
