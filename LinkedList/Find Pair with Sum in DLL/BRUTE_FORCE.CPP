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

vector<pair<int,int>> findPairs(Node* head, int k)
{
    set<pair<int,int>> ans;
    Node* temp1 = head;

    while (temp1 != NULL) {
        Node* temp2 = temp1->next;

        while (temp2 != NULL) {
            if (temp1->data + temp2->data == k) {
                ans.insert({temp1->data, temp2->data});
            }
            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }

    return vector<pair<int,int>>(ans.begin(), ans.end());
}

void print(Node * head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main() 
{
    vector<int> arr = {2,4,6,7,9};
    int k = 11;

    Node *Head = Convertarrtodll(arr);

    cout << "DLL: ";
    print(Head);

    cout << "Pairs with sum " << k << ":" << endl;

    vector<pair<int,int>> res = findPairs(Head, k);

    for (auto &p : res) {
        cout << p.first << " + " << p.second << " = " << k << endl;
    }

    return 0;
}