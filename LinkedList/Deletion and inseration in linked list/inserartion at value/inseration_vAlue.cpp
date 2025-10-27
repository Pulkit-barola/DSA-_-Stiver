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

node * Insertval(node * head , int el , int val){
    if(head == nullptr){
        return nullptr;
    }
    if(head->data==val){
        node * temp = new  node(el);
        return  temp;
    }
    node * temp = head;
    while(temp->Next!=nullptr){
        if(temp->Next->data== val){
            node * newnode = new node(el);
            newnode->Next = temp->Next;
            temp->Next = newnode;
            break;
        }
        temp = temp -> Next;
    }
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
    vector<int>arr = {12,4,5,6};
    node * head = convertArr2LL(arr);
    int el;
    cout<<"Enter the value that you want to insert in  new  node  \n";
    cin>>el;
    int val; 
    cout<<"Enter the valpostion \n";
    cin>>val;
    head = Insertval(head,el,val);
    print(head);
}