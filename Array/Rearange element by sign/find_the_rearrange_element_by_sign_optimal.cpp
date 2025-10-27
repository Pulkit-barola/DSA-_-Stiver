#include<bits/stdc++.h>
using namespace std;

vector<int>Rearrangeelement(vector<int>&nums){
    int n = nums.size();
    vector<int>ans(n,0);
    int posindex = 0;
    int negindex = 1;
    for(int i = 0; i<n; i++){
        if(nums[i]<0){
            ans[negindex] = nums[i];
            negindex += 2;
        }
        else{
            ans[posindex] = nums[i];
            posindex+=2;
        }
    }
    return ans;
}


int main(){
    vector<int>arr = {2,-1,-3,4,5,-6};
    vector<int>result = Rearrangeelement(arr);
    for(auto it: result){
        cout<<" "<<it;
    }
}