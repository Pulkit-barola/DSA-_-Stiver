#include<bits/stdc++.h>
using namespace std;
// this is brute approch which tc is 0(n) and space is o(1)
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


Node* reverseDLL(Node* head)
{   
    if(head == NULL || head->next == NULL){
        return  head;
    }
    // Write your code here   
    Node* last = NULL;
    Node*  Curr = head;
    while(Curr!=NULL){
        last  = Curr -> back;
        Curr -> back = Curr-> next;
        Curr ->next  = last;
        Curr = Curr -> back; 
    }
    return last->back;
}


int main(){
    vector<int>arr = {12,4,5,6};
    Node * head = Convertarrtodll(arr);
    head = reverseDLL(head);
    print(head);
}