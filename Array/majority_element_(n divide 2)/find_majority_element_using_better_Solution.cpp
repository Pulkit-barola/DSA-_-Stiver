#include<bits/stdc++.h>
using namespace std;

vector<int>MajorityElment(vector<int> &nums){
    map<int,int>mpp;
    for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]++;
    }

    for(auto it : mpp){
        if(it.second>(nums.size()/2)){
            return {it.first};
        }
    }
    return {-1};
}

int main() {
    vector<int>arr = {2,2,3,3,1,2,3,1,2,3,2,2,3,1,2,2,2,2};
    int n = arr.size();

    vector<int>result = MajorityElment(arr);
    cout<<"\t"<<"The majority element in the array"<<endl;
    cout<<"\t";
    for(auto it :result){
        cout<<it;
    }
    cout<<endl;
    cout<<n;
}