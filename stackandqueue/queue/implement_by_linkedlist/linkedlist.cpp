#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * next;

    node(int val){
        data = val;
        next = nullptr;
    }
};

class Queue {
private:
    node* front;
    node* rear;
    int currSize;   
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        currSize = 0;
    }
    void enqueue(int x) {
        node* newNode = new node(x);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        currSize++;
        cout << x << " inserted into queue\n";
    }
    void dequeue() {
        if (currSize == 0) {
            cout << "Queue Underflow\n";
            return;
        }
        node* temp = front;
        cout << front->data << " removed from queue\n";
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        currSize--;
    }

    void peek() {
        if (currSize == 0) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element: " << front->data << endl;
    }

    void size() {
        cout << "Current size: " << currSize << endl;
    }
};

int main(){
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue (Push)\n";
        cout << "2. Dequeue (Pop)\n";
        cout << "3. Peek\n";
        cout << "4. Size\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.size();
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
