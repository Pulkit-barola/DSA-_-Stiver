#include<bits/stdc++.h>
using namespace std;

int KthReverse(vector<int>&nums,int k){
    int n = nums.size();
    int i = 0;
    int curr = 1;

    while(true){
        if(i<n && nums[i]==curr){
            i++;
        }
        else{
            k--;

            if(k == 0){
                return curr;
            }
        }
        curr++;
    }
}

int main() {
    vector<int>nums = {2,3,4,7,11};
    int k = 5;
    int result = KthReverse(nums,k);
    cout<<result;
}