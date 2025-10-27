#include<bits/stdc++.h>
using namespace std;

vector<int> FindKelement(vector<int>nums){
    int n = nums.size();
    vector<int>peak;
    for(int i=0; i<n; i++){
        if((i==0 || nums[i-1]<nums[i])&&(i == n-1|| nums[i]>nums[i+1])){
            peak.push_back(i);
        }
    }
    return peak;
}

int main(){
    vector<int>nums = {1,2,3,5,9,6,12,11,10,8,15,3};
    vector<int> result = FindKelement(nums);
    for(int it :result){
        cout<<it<<" ";
    }
    cout<<endl;
}