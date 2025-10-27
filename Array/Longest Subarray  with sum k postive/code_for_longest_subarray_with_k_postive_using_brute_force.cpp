#include<bits/stdc++.h>
using namespace std;

vector<int>LongestSubarray(vector<int>&nums , int target){
    int LONGEST = 0;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i; j<nums.size(); j++){ // the j is starting from i and making a sub array
            int sum = 0;
            for(int k = i; k <= j; k++){
                // This loop is using for sum 
                sum = sum + nums[k];
                
            }if(sum==target){
                    LONGEST = max(LONGEST , j-i+1);
            }
        }
        
    }
    return {LONGEST};
}


int main(){
    vector<int>nums = {1,2,3,4,2,1,5,1,5,3,4};
    int target  = 5; 
                    //  answer is come 0 index campare and try to come 5 while 0 is not full work then go to 1 then 2 thrn 2 give 2 + 3 = 5 which is longest so they are longest
    vector<int>result =LongestSubarray(nums,target);
    cout<<"\t"<<"Longest subarray with k"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}