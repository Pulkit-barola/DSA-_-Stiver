#include <bits/stdc++.h>
using namespace std;

// ✅ Kadane’s Algorithm with subarray tracking
vector<int> KadaneSolutionMaxSubarray(vector<int>& nums) {
    int n = nums.size();
    long long sum = 0;
    int Maxi = INT_MIN;

    int start = 0, end = 0, temp_start = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (sum > Maxi) {
            Maxi = sum;
            start = temp_start;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            temp_start = i + 1;  // Start a new subarray from next index
        }
    }

    // 🔁 Extract the subarray from start to end
    vector<int> maxSubarray;
    for (int i = start; i <= end; i++) {
        maxSubarray.push_back(nums[i]);
    }

    // 🧠 Also add the sum at the end for reference
    maxSubarray.push_back(Maxi);  // Or return separately if you want

    return maxSubarray;
}

int main() {
    vector<int> arr = {1, 2, -1, 2, -3, -4, 2, 5, 7, 9};

    vector<int> result = KadaneSolutionMaxSubarray(arr);

    cout << "THE MAXIMUM SUBARRAY IS:\n\t";
    for (int i = 0; i < result.size() - 1; i++) {
        cout << result[i] << " ";
    }

    cout << "\nMAXIMUM SUM: " << result.back() << endl;

    return 0;
}

