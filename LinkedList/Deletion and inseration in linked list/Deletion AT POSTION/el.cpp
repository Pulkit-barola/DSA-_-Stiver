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


node * deleteel(node * head ,   int val){
   if(head == nullptr){
    return nullptr;
   }
   if(head->data==val){
    node* Temp = head;
    head = head -> Next;
    delete Temp;
    return head;
   }
   node * prev =0 ;  node* temp =head;
   while(temp!=nullptr){

        if(temp->data==val){

            prev->Next = prev->Next->Next;
            delete temp; 
            break;
        }
        prev = temp;
        temp = temp->Next;

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
    int k;
    cout<<"Find the k index";
    cin>>k;
    head = deleteel(head,k);
    print(head);
}