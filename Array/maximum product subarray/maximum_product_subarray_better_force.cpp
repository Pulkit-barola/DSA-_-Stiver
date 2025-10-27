#include<bits/stdc++.h>
using namespace std;

int MaximumProduct(vector<int>&nums){
    int maxi = INT_MIN;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        int product = 1;
        for(int j = i; j<n; j++){
            product = product*nums[j];
            maxi = max(maxi,product);
        }

    }
    return maxi;
}

int main(){
    vector<int>nums = {2,4,-2,1};
    int result = MaximumProduct(nums);
    cout<<result;
}