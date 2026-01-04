#include<bits/stdc++.h>
using namespace std;

vector<int>singleNumber(vector<int>&nums){
    unordered_map<int,int>mpp;
    vector<int>ans;
    for(int i =0; i<nums.size(); i++){
        mpp[nums[i]]++;
    }

    // iterate through map
    for(auto it : mpp){
        if(it.second%2==1){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {4,1,2,1};
    vector<int> ans = singleNumber(nums);
    cout << "The single numbers in given array are: " << ans[0] << " and " << ans[1];
    
    return 0;
}