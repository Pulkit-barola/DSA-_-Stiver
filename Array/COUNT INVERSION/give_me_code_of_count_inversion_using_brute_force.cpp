#include<bits/stdc++.h>
using namespace std;

int Countinversion(vector<int>&nums){
    int n = nums.size();
    int cnt = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n;  j++){
            if(nums[i]>nums[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    vector<int>nums = {5,4,3,2,1};
    int result = Countinversion(nums);
    cout<<"The count of the inversion "<<result<<endl;
}

