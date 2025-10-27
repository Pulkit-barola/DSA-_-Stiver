#include<bits/stdc++.h>
using namespace std;

vector<int>RepeatAndMissing(vector<int>&nums){
    int n = nums.size();
    int repeating = -1; int missing =-1;
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j = 0; j<n; j++){
            if(nums[j]==i){
                cnt++;
            }
        }
        if(cnt==2){
            repeating=i;
        }
        if(cnt==0){
            missing = i;
        }

        // if(repeating!=-1 && missing != -1){
        //     break;
        // }
    }
    return{repeating,missing};
}

int main() {
    vector<int>nums = {2,3,4,6,1,1,8};
    vector<int>result = RepeatAndMissing(nums);
    for(auto it : result){
            cout<<it;
    }
    cout<<endl;

}