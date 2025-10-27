#include<bits/stdc++.h>
using namespace std;

vector<int>RearangeElementBysign(vector<int>&nums){
    int n = nums.size();
    vector<int>pos;
    vector<int>neg;
    
    for(int i=0; i<n; i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    for(int i = 0; i<n/2; i++){
        nums[2*i] = pos[i];
        nums[2*i+1] = neg[i];
    }
    return nums;
}

int main(){
    vector<int>arr = {2,-1,-3,4,5,-6};
    vector<int>result = RearangeElementBysign(arr);
    for(auto it: result){
        cout<<" "<<it;
    }
}