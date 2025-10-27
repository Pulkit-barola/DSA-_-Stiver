#include<bits/stdc++.h>
using namespace std;

int LargestConsecutiveSequence(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int cnt = 0; 
    int longest = 1;
    int Leasetsmaller = INT_MIN;
    for(int i =0; i<n; i++){
        if(nums[i]-1==Leasetsmaller){
            cnt++;
            Leasetsmaller = nums[i];
        }
        if(nums[i]!=Leasetsmaller){
            cnt = 1;
            Leasetsmaller = nums[i];
        }
       longest = max(longest , cnt);
    } 
    
    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Largest Consecutive Sequence Length: " << LargestConsecutiveSequence(nums) << endl;
    return 0;
}