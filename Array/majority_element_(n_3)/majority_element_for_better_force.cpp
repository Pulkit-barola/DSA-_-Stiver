#include <bits/stdc++.h>
using namespace std;

vector<int>MajorityElement(vector<int>&nums){
    int n = nums.size();
    map<int,int>mpp;

    for(auto num:nums){
        mpp[num]++;
    }

    for(auto &pair : mpp){
        if(pair.second >n/3){
            cout<<pair.first<<" ";
        }
    }
    cout<<endl;
}

int main(){
    vector<int>nums = {1,1,1,1,2,2,3,3,3};
    MajorityElement(nums);
}