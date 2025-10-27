#include<bits/stdc++.h>
using namespace std;

int Appearance(vector<int>&nums)                        // in this we use int function because  they give output of exactly once  and for more we use vector functtion
    {
        int XOR = 0;
        for(int i : nums){
            XOR = XOR^i;
        }
        return XOR;
    }

int main(){
    vector<int>nums = {1,1,2,3,3,4,4};

    int result = Appearance(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<result<<endl;
        break;
    }
}