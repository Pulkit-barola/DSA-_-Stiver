#include <bits/stdc++.h>
using namespace std;

void LongestSubarray(vector<int>& nums) {
    int n = nums.size();
    int MaxLen = 0, start = -1, end = -1;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum == 0) {
                int len = j - i + 1;
                if (len > MaxLen) {
                    MaxLen = len;
                    start = i;
                    end = j;
                }
            }
        }
    }

    cout << "Length = " << MaxLen << endl;
    cout << "Subarray = ";
    for (int k = start; k <= end; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 0, 0, -1, 0, 2};
    LongestSubarray(nums);
    return 0;
}
