#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int data1 , Node * next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node * Convertarr2LL(vector<int> &arr){
    Node * Head = new Node(arr[0]);
    Node* Mover =  Head;
    for(int i = 1; i<arr.size(); i++){
        Node * temp = new Node(arr[i]);
        Mover -> next = temp;
        Mover = temp;
    }
    return Head;
}
int LengthofLL(Node * Head){
    int cnt = 0;
    Node*Temp = Head;
    while(Temp){
        cout<<Temp->data<<" ";
        Temp = Temp->next;
        cnt++;
    }
    return cnt;
}

int main() {
    vector<int> arr = {2,4,6,7,9};
    Node * Head = Convertarr2LL(arr);
    //cout<<Head -> data;
    cout<<"The Length of the Linked List "<<LengthofLL(Head)<<endl;
}