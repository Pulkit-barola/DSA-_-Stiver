#include <iostream>
#include <vector>
using namespace std;

// Function to find first occurrence
int firstOccurrence(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            ans = mid;          // possible answer
            high = mid - 1;     // move left to find earlier occurrence
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOccurrence(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            ans = mid;          // possible answer
            low = mid + 1;      // move right to find later occurrence
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;

    int first = firstOccurrence(arr, x);
    int last = lastOccurrence(arr, x);

    if (first == -1)
        cout << "Element not found\n";
    else
        cout << "First occurrence: " << first
             << ", Last occurrence: " << last << endl;

    return 0;
}
