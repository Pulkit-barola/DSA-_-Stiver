#include<bits/stdc++.h>
using namespace std;

vector<int>ApperanceOnce(vector<int>&nums){
    map<int,int>Number;
    vector<int>result;
        // count the freuency in array
    for(int num : nums){
        nums[num]++;
    }

    for(auto it : Number){
        if (it.second == 1){
            result.push_back(it.first);
        }
    }
    return result;
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,5,6,6,7,7};

    vector<int>result = ApperanceOnce(nums);
    cout<<"\t"<<"Appare Once in array"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<" "<<it;
    } 
}
