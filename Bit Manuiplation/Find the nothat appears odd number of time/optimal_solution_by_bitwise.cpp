#include<bits/stdc++.h>
using namespace std;

int singlenumber(vector<int>&nums){
    int n = nums.size();
    int XOR = 0;

    for(int i = 0; i<n; i++){
        XOR ^= nums[i];
    }

    return  XOR;
}

int main() {
    vector<int>nums = {4,2,1,2,1};
    int ans = singlenumber(nums);
    cout<<"The single number in the array"<<" "<<ans;
}