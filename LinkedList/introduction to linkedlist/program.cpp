#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next; //  self made data type

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1; 
    }
};

int main() {
    // Node* Y = new Node(2,nullptr);
    // cout<<Y<<endl;
    
    Node Y =  Node(2,nullptr); // it just create an object
    cout<<Y.data<<endl;
}