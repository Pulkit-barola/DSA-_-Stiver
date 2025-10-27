#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;  // to avoid duplicates

    // Pick first two numbers
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            unordered_set<long long> hashset; // for the 3rd loop

            for (int k = j + 1; k < n; k++) {
                long long sum = (long long)nums[i] + nums[j] + nums[k];
                long long fourth = (long long)target - sum;

                // If the 4th number exists in hashset → we found a quadruplet
                if (hashset.find(fourth) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                // Insert current number in hashset for future use
                hashset.insert(nums[k]);
            }
        }
    }

    // Convert set to vector
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 0, 5, 0, -2, -1, 0};
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
