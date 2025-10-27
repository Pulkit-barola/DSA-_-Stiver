#include<bits/stdc++.h>
using namespace std;

vector<int>LongestSubArray(vector<int>&nums,int target){
    int longestarray = 0;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        for(int j= i; j<=nums.size(); j++){
            //sum = sum+nums[j];
            sum+=nums[j];
            
            
            if(sum==target){
                longestarray = max(longestarray , j-i+1);
            }
        }
        
    }
    return{longestarray};
}

int main(){
    vector<int>nums = {1,2,3,4,2,1,5,1,5,3,4};
    int target  = 5; 
    vector<int>result =LongestSubArray(nums,target);
    cout<<"\t"<<"Longest subarray with k"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}