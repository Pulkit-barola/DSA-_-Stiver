#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to return max of each sliding window of size k
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // Result vector to store maximum of each window
        vector<int> result;

        // Loop through the array till the window can slide
        for (int i = 0; i <= nums.size() - k; i++) {
            // Initialize max element as the first element of the window
            int maxVal = nums[i];

            // Traverse through the current window of size k
            for (int j = i; j < i + k; j++) {
                // Update maxVal if a larger value is found
                maxVal = max(maxVal, nums[j]);
            }

            // Append the max of this window to the result
            result.push_back(maxVal);
        }

        // Return the final result
        return result;
    }
};

// Driver code
int main() {
    Solution obj;

    vector<int> arr = {4, 0, -1, 3, 5, 3, 6, 8};
    int k = 3;

    vector<int> ans = obj.maxSlidingWindow(arr, k);

    // Print the result
    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
