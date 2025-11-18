#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }

    Node(int data1, Node* next1,Node * PREV1){
        data = data1;
        prev = PREV1;
        next = next1;
    }
};

Node* Convertarrtodll(vector<int>&arr){
    Node *head = new Node(arr[0]);
    Node * prev = head;
    int n = arr.size();
    for(int i=1; i<n; i++){
        Node * temp = new Node(arr[i],nullptr , prev);
        prev->next = temp;
        prev = temp; // prev can you move to  temp
    }

    return head;
}

Node * RemoveDuplices(Node * Head){
    Node  * temp = Head;
    while(temp != nullptr && temp -> next != NULL){
        Node * nextnode = temp -> next;
        while (nextnode != nullptr && nextnode -> data == temp -> data)
        {
            Node  * duplicate = nextnode;
            nextnode = nextnode -> next;
            delete duplicate;
        }
        temp -> next = nextnode;
        nextnode -> prev = temp;
        temp = temp -> next;
    }
    return Head;
}


void print(Node * head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main() {
    vector<int> arr = {2, 4, 4, 6, 7, 7, 7, 9};
    Node* head = Convertarrtodll(arr);

    cout << "Before: ";
    print(head);

    head = RemoveDuplices(head);

    cout << "After:  ";
    print(head);
}