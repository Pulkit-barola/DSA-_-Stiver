#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node * next;

    Node(int data1 , Node* next1){
         data = data1;
         next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node * head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}


Node *addTwoNumbers(Node *num1, Node *num2) {
    Node* dummyHead = new Node(-1);
    Node* temp1 = num1;
    Node* temp2 = num2;
    Node* curr = dummyHead;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL) {
        int sum = carry;
        if (temp1) sum += temp1->data;
        if (temp2) sum += temp2->data;

        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;  // ? moves forward each iteration

        if (temp1) temp1 = temp1->next;
        if (temp2) temp2 = temp2->next;
    }

    if (carry) {
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummyHead->next;
}


int main(){
    vector<int>arr = {2,4,5,6};
    vector<int>arr2 = {4,5,6,7};
    Node * head = convertArr2LL(arr);
    Node * head2 = convertArr2LL(arr2);
    head = addTwoNumbers(head , head2);
    print(head);
}