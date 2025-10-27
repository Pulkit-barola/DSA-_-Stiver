#include<bits/stdc++.h>
using namespace std;

vector<int> SingleElement(vector<int>nums){
    int n = nums.size();
    vector<int>ans;
    for(int i = 0; i<n; i++){
        if(i==0){ // first element
            if (nums[i]!=nums[i+1]){
                 ans.push_back(nums[i]);
            }
        }

        else if(i==n-1){
            if (nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        else{
            if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
    }
    return ans;
}

int main() {
    vector<int>nums = {1,1,2,2,3,4,4,5,6,6};
    vector<int> result = SingleElement(nums);
    for(auto it : result){

        cout<<it<<" ";
    }
    cout<<endl;
}
