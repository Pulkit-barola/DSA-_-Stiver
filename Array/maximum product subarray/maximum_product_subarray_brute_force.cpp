#include<bits/stdc++.h>
using namespace std;

vector<int>Maximumproduct(vector<int>&nums){
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j=i; j<n; j++){
            int product = 1;
            for(int k = i; k<j; k++){
                product = product*nums[k];
            }
            maxi = max(maxi,product);
        }
        
    }
    return {maxi};
}

int main(){
    vector<int>nums = {2,4,-2,1};
    vector<int>result = Maximumproduct(nums);
    for(auto it :result){
        cout<<it;
    }
}