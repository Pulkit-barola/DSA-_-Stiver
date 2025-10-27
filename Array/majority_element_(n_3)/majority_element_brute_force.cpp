#include<bits/stdc++.h>
using namespace std;

vector<int>MajorityElement(vector<int>&nums){
    int n = nums.size();
    vector<int>result;
    for(int i = 0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(nums[j]==nums[i]){
                cnt++;
            }
        }

        if(cnt>n/3&&find(result.begin(), result.end(),nums[i]) == result.end()){
            result.push_back(nums[i]);
        }
    }
    return {result};
}

int main(){
    vector<int>nums = {3,2,3,2,3,1,1,3};
    vector<int> ans = MajorityElement(nums);

    cout << "Majority elements (> n/3) are: ";
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}