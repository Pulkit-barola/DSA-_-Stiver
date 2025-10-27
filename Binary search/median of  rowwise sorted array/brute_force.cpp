#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int>>& matrix) {
    int n = matrix.size();        // number of rows
    int m = matrix[0].size();     // number of columns
    
    vector<int> arr;
    
    // Step 1: Flatten matrix into array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr.push_back(matrix[i][j]);
        }
    }
    
    // Step 2: Sort the array
    sort(arr.begin(), arr.end());
    
    // Step 3: Find median
    int total = n * m;
    if (total % 2 == 1) {
        return arr[total / 2];  // odd → middle element
    } else {
        return (arr[total/2 - 1] + arr[total/2]) / 2; // even → average
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    
    cout << "Median = " << findMedian(matrix) << endl;
    return 0;
}
