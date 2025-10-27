#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool exists(vector<int> &nums, int num) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == num) return true;
    }
    return false;
}

int longestConsecutive(vector<int> &nums) {
    int longest = 0;

    for (int i = 0; i < nums.size(); i++) {
        int currentNum = nums[i];
        int count = 1;

        // Keep checking for the next consecutive number
        while (exists(nums, currentNum + 1)) {
            currentNum++;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Largest Consecutive Sequence Length: " << longestConsecutive(nums) << endl;
    return 0;
}
