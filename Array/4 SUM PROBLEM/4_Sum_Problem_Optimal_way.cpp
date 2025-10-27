#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());  // Step 1: sort the array

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates for i

        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicates for j

            int k = j + 1;
            int l = n - 1;

            while (k < l) {
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                if (sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});

                    // skip duplicates for k
                    while (k < l && nums[k] == nums[k + 1]) k++;
                    // skip duplicates for l
                    while (k < l && nums[l] == nums[l - 1]) l--;

                    k++;
                    l--;
                }
                else if (sum < target) {
                    k++;
                }
                else {
                    l--;
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int key;
    cout << "----ENTER THE KEY VALUE----" << endl;
    cin >> key;

    vector<vector<int>> result = fourSum(nums, key);

    cout << "The List of Numbers which sum to " << key << ":\n";
    for (auto& it : result) {
        for (int num : it) cout << num << " ";
        cout << endl;
    }
}
