#include<bits/stdc++.h>
using namespace std;

void Recu(int index , vector<int>&nums, vector<vector<int>>&ans){
    int n = nums.size();
    if(index == n){
        ans.push_back(nums);
    }
    for(int i = index; i<n; i++){
        swap(nums[index], nums[i]);
        Recu(index+1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute (vector<int> &nums){
    vector<vector<int>>ans;
    Recu(0, nums, ans);
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