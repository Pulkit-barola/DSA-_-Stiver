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

Node * SortLL(Node*head){
    Node * temp = head;
    vector<int>arr;
    while(temp!=nullptr){
        arr.push_back(temp->data);
        temp = temp->next;

    }

    sort(arr.begin(),arr.end());
    // temp = head;
    // for(int i = 0; i<arr.size(); i++){
    //     temp -> data = arr[i];
    //     temp = temp->next;

    // }
    // using coverting arr to linkedlist
    Node*newhead = createLinkedList(arr);
    return newhead;
}

int main(){
    vector<int>arr = {4,5,2,-1,8};
    cout<<"before sorted"<<endl;
    Node*head = createLinkedList(arr);
    printList(head);
    cout<<"after sorted"<<endl;
    head = SortLL(head);
    printList(head);
}