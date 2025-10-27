#include<bits/stdc++.h>
using namespace std;

int SingleElement(vector<int>nums){
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(i==0){ // first element
            if (nums[i]!=nums[i+1]){
                return nums[i];
            }
        }

        else if(i==n-1){
            if (nums[i]!=nums[i-1]){
                return nums[i];
            }
        }
        else{
            if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                return nums[i];
            }
        }
    }
}

int main() {
    vector<int>nums = {1,1,2,2,3,4,4,5,5};
    int result = SingleElement(nums);
    cout<<"The Single Element Which is Present in The Sorted Array"<<" "<<result<<endl;
} 