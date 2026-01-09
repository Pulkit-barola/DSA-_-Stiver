#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int maxReach = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (i > maxReach) return false;   // stuck, can't reach this index
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}

int main() {
    int n;
    cin >> n;                 // size of array

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];       // array elements
    }

    if (canJump(nums))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
