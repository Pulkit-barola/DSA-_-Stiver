#include<bits/stdc++.h>
using namespace std;
// this is brute approch which tc is 0(2n) and space is o(n)
struct Node
{
    public:
    int data;
    Node * next;
    Node * back;

    Node(int data1, Node*next1,Node*back1){
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

Node*Convertarrtodll(vector<int>&arr){
    int n = arr.size();
    Node * next = new Node(arr[0]);
    Node  * prev = next;
    for(int i = 1; i<n; i++){
        Node * newnode = new Node(arr[i],nullptr,prev);
        prev->next = newnode;
        prev = newnode;
        
    }
    return next;
}
void print(Node * head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node * ReverseDll(Node *  head ){
    Node  * temp = head;
    stack<int>st;

    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != nullptr){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
        
    }
    return  head;
}
c