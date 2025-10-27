#include<bits/stdc++.h>
using namespace std;

vector<int>Appearceonce(vector<int> &nums){
    int n = nums.size();
    int cnt;
    int num;
    for(int i = 0; i<n; i++){
         num = nums[i];
         cnt = 0;

        for(int j=0; j<n; j++){
            if(nums[j]==num){
                cnt++;
            }

        }
        if(cnt==1){
            return {num};
        }
    }
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,4};
    
    vector<int>result = Appearceonce(nums);

    for(auto it  : result){
        cout<<it;
    }
}