#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};   // input
    int n = nums.size();

    int total = 1 << n;             // 2^n subsets
    vector<vector<int>> ans;

    for (int mask = 0; mask < total; mask++) {
        vector<int> subset;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(nums[i]);
            }
        }

        ans.push_back(subset);
    }

    // print all subsets
    for (auto &v : ans) {
        cout << "[ ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}
