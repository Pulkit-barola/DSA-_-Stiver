#include<bits/stdc++.h>
using namespace std;

vector<int>CountSubarray(vector<int>&nums , int k){
    int n = nums.size();
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            int Xor = 0;
            for(int l = i; l<j; l++){
                Xor = Xor^nums[l];
            }
            if(Xor == k){
                cnt++;
            }
        }
    }
    return {cnt};
}

int main(){
    vector<int>nums = {2,4,5,6,1,0,8,4};
    int target;
    cout<<"-----Enter the Target----- "<<endl;
    cout<<"\t";
    cin>>target;
    vector<int> result = CountSubarray(nums,target);
    for(auto it:result){
        cout<<it;
    }
}