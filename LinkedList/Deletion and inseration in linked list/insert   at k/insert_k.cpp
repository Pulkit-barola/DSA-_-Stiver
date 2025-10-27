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

node * InsertK(node * head , int el , int k){
    if(head == nullptr){
        if(k==1){
            return new node(el);
        }else{
            return nullptr;
        }
    }
    if(k==1){
        node * temp = new  node(el);
        return  temp;
    }
    int cnt = 0 ;
    node * temp = head;
    while(temp!=nullptr){
        cnt++;
        if(cnt == k-1){
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
    int k; 
    cout<<"Enter the K postion \n";
    cin>>k;
    head = InsertK(head,el,k);
    print(head);
}