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

Node * deleteHead(Node* head){
    if(head == nullptr || head ->next == nullptr ){

        return nullptr;
    }


    Node * prev = head;
    head = head->next;
    head->back = nullptr;
    prev -> next = nullptr;
    delete prev;
    return  head;

}

Node* DeleteTail(Node*  head){
    if(head == nullptr || head ->next == nullptr ){

        return nullptr;
    }
    Node*tail = head;
    while(tail->next!=nullptr){
        tail = tail -> next;
    }
    Node *  prev  = tail->back;
    prev->next =  nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node * DeleteK(Node* head , int k){
    if(head ==  nullptr){
        return nullptr;
    }

    int cnt  = 0;
    Node * temp =head;
    while(temp->next!=nullptr){
        cnt++;
        if(cnt == k){
            break;
        }
        temp= temp->next;
    }
    Node * prev = temp->back;
    Node * front = temp ->next;

    if(prev  == nullptr && front ==  nullptr){
        delete temp;
        return  nullptr;

    }
    else  if (prev ==  nullptr){
        deleteHead(head);
    }
    else if(front == nullptr){
        DeleteTail(head);
    }
    prev  -> next =  front;
    front->back= prev;
    temp ->next  = nullptr;
    temp ->back = nullptr;
    delete(temp);
    return head;
}

int main(){
    vector<int>arr = {12,4,5,6};
    Node * head = Convertarrtodll(arr);
    int k;
    cout<<"Find the k index";
    cin>>k;
    head = DeleteK(head,k);
    print(head);
}