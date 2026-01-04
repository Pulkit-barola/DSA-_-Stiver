#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear, currSize;

public:
    Queue() {
        front = 0;
        rear = -1;
        currSize = 0;
    }

    void enqueue(int x) {
        if (currSize == SIZE) {
            cout << "Queue Overflow\n";
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        currSize++;
        cout << x << " inserted into queue\n";
    }

    void dequeue() {
        if (currSize == 0) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front] << " removed from queue\n";
        front = (front + 1) % SIZE;
        currSize--;
    }

    void peek() {
        if (currSize == 0) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }

    void size() {
        cout << "Current size: " << currSize << endl;
    }
};

int main() {
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
            cout << "Enter value: ";
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
            cout << "Exiting program\n";
            return 0;

        default:
            cout << "Invalid choice\n";
        }
    }
}
