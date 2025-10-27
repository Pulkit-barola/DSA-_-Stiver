#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& arr) {
    int n = arr.size();

    // Case 1: Only one element
    if (n == 1) return 0;

    // Case 2: First element is peak
    if (arr[0] > arr[1]) return 0;

    // Case 3: Last element is peak
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    // Binary Search for peak in middle
    int low = 1, high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is a peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        // If left neighbor is bigger, go left
        else if (arr[mid ] > arr[mid - 1]) {
            low = mid + 1;
        }
        // Else, go right
        else if (arr[mid]>arr[mid+1]){
            high = mid -1;
        }
        
    }

    return -1; // This should not happen due to constraints
}

int main() {
   
    vector<int>nums = {1,2,3,4,5,3,1};

    cout << findPeakElement(nums) << endl;
    return 0;
}
