#include<bits/stdc++.h>
using namespace std;

int singlenumber(vector<int>&nums){
    int n = nums.size();
    unordered_map<int,int>mpp;

    for(int i = 0; i<n; i++){
        mpp[nums[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            return  it.first;
        }
    }
    return  -1;
}

int main() {
    vector<int>nums = {4,2,1,2,1};
    int ans = singlenumber(nums);
    cout<<"The single number in the array"<<" "<<ans;
}