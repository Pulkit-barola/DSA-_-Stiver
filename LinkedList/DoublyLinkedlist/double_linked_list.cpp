#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node * next;
    Node * back;

    Node(int data1, Node * next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
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

void print(Node * head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main() {
    vector<int> arr = {2,4,6,7,9};
    Node * Head = Convertarrtodll(arr);
    print(Head);
}