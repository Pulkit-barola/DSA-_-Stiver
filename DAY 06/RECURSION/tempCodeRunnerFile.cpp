#include <iostream>
// #include <vector>
// using namespace std;

//     void reverseHelper(vector<int> &arr, int start, int n) {
//         if (start >= n) {return;} // Base case: when start meets or crosses end

//         swap(arr[start], arr[n]); // Swap first and last element
//         reverseHelper(arr, start + 1, n - 1); // Recur for the remaining array
//     }

// // Driver Code
// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     reverseHelper(arr,0,n);

//     for (int num : arr) {
//         cout << num << " ";
//     }
//     return 0;
// }