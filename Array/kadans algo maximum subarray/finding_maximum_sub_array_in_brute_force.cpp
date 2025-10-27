#include<bits/stdc++.h>
using namespace std;

vector<int>MaximumSubarray(vector<int> &nums){
    int Maxi = INT_MIN;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i ; j<nums.size(); j++){
            int sum = 0;
            for(int k = i; k<=j; k++){
                sum+=nums[k];
                Maxi = max(sum , Maxi);
            }
            
        }

        
    }
    return {Maxi};
}

int main() { 
    vector<int>nums = {1,2,3,4,2,1,5,1,5,3,4};
    vector<int>result =MaximumSubarray(nums);
    cout<<"\t"<<" Maximum subarray "<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}