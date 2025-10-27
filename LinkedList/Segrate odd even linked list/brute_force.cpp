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

Node * SegrateOddEven(Node*head){
    if(head == NULL|| head -> next == NULL){
        return head;
    }

    vector<int>arr;
    Node* temp = head;  
// Collect odd position nodes  
    while (temp != NULL && temp->next != NULL) {  
        arr.push_back(temp->data);  
        temp = temp->next->next;  
    }  
// If list length is odd, last element is also odd-indexed  
    if (temp)  
        arr.push_back(temp->data);  

// Collect even position nodes  
        temp = head->next;  
        while (temp != NULL && temp->next != NULL) {  
            arr.push_back(temp->data);  
            temp = temp->next->next;  
        }  
        if (temp)  
            arr.push_back(temp->data);  

 

// Replace in original list  
            temp = head;  
            int i = 0;  
        while (temp != NULL) {  
            temp->data = arr[i++];  
            temp = temp->next;  
        }  

        return head;

}

int main(){
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* head = convertArr2LL(arr);

    cout << "Original list: ";
    print(head);

    head = SegrateOddEven(head);

    cout << "After segregating (odd-index before even-index): ";
    print(head);

    return 0;
}