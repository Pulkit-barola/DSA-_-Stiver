#include <bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node * Next;

    node(int data1 , node* next1){
         data = data1;
         Next = next1;
    }

    node(int data1){
        data = data1;
        Next = nullptr;
    }
};
node* convertArr2LL(vector<int>& arr) {
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->Next = temp;
        mover = temp;
    }
    return head;
}


node * deletenode(node * head){
    if (head == nullptr){
        return head;
    }
    node * temp = head;
    head = head->Next;
    free(temp);
    return head;
}

void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->Next;
    }
    cout << endl;
}

int main() {
    vector<int>arr= {12,4,5,7};
    node * head = convertArr2LL(arr);
    head = deletenode(head);
    cout<<head->data<<endl;
    print(head);
}