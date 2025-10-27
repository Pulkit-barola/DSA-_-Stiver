#include<bits/stdc++.h>
using namespace std;

void RecurPerm(vector<int> &ds, vector<int> &nums , vector<vector<int>> &ans, vector<int> &freq) {
    if(ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
    }
    for(int i = 0; i<nums.size(); i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i] = 1;
            RecurPerm(ds, nums, ans, freq);
            ds.pop_back();
            freq[i] = 0; // backtrack
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> freq(nums.size(), 0);  // create a vector integer and fill out all value is 0
    RecurPerm(ds, nums, ans, freq);
    return ans;
}


int main(){
    vector<int>nums = {1,2,3};

    vector<vector<int>>result = permute(nums);
    for(auto it : result){
        for(auto num : it){
            cout<<" "<<num;
        }
        cout<<endl;
    }
}