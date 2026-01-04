// #include <iostream>
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


// without vectoor
#include<bits/stdc++.h>
using namespace std;

void Reverseanarray(int arr[] , int start , int end){
    if(start>=end){
        return;
    }
     swap(arr[start], arr[end]);
    Reverseanarray(arr,start+1,end-1);
}

int main(){
    int arr[10] = {78,97,12,9,45,74,26,11,789,1};
    int n = sizeof(arr)/sizeof(int);

    Reverseanarray(arr ,0 ,n-1);

    for(int i=0; i<n; i++){
        cout<<" "<<arr[ i ] ;
    }
    return 0;
}

// with one poitr

// #include <bits/stdc++.h>
// using namespace std;

// void Reverseanarray(int arr[], int i, int size) {
//     if (i >= size / 2) { // Base case: Stop when reaching the middle
//         return;
//     }

//     swap(arr[i], arr[size - i - 1]); // Swap elements from start and end
//     Reverseanarray(arr, i + 1, size); // Move the pointer forward
// }

// int main() {
//     int arr[] = {78, 97, 12, 9, 45};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     Reverseanarray(arr, 0, size); // Start recursion with one pointer

//     // Print the reversed array
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }
