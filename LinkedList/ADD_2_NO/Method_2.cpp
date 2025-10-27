#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

// Convert an array to a linked list
Node* convertArr2LL(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        mover->next = new Node(arr[i]);
        mover = mover->next;
    }
    return head;
}

// Print a linked list
void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Add two numbers represented as linked lists
Node* addTwoNumbers(Node* num1, Node* num2) {
    Node* dummyHead = new Node(-1);
    Node* curr = dummyHead;
    Node* temp1 = num1;
    Node* temp2 = num2;
    int carry = 0;

    // Loop while either list has nodes or carry is non-zero
    while (temp1 != nullptr || temp2 != nullptr || carry) {
        int sum = carry;
        if (temp1) {
            sum += temp1->data;
            temp1 = temp1->next;
        }
        if (temp2) {
            sum += temp2->data;
            temp2 = temp2->next;
        }

        curr->next = new Node(sum % 10);
        curr = curr->next;
        carry = sum / 10;
    }

    Node* result = dummyHead->next;
    delete dummyHead; // clean up the dummy node
    return result;
}

int main() {
    vector<int> arr1 = {2, 4, 5, 6};
    vector<int> arr2 = {4, 5, 6, 7};

    Node* head1 = convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);

    Node* result = addTwoNumbers(head1, head2);
    print(result);

    return 0;
}
