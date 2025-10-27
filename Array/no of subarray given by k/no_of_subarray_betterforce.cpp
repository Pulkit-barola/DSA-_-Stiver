#include<bits/stdc++.h>
using namespace std;

vector<int>LongestSubArray(vector<int>&nums,int target){
    int cnt = 0;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        for(int j= i; j<nums.size(); j++){
            //sum = sum+nums[j];
            sum+=nums[j];
            
            
            if(sum==target){
                cnt++;
            }
        }
        
    }
    return {cnt};
}

int main(){
    vector<int>nums = {1,2,3,-3,1,1,1,4,2,-3};
    int target  = 3; 
    vector<int>result =LongestSubArray(nums,target);
    cout<<"\t"<<"Longest subarray with k"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}