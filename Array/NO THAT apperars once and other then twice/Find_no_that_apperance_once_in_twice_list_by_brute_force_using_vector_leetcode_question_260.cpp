#include<bits/stdc++.h>
using namespace std;

vector<int>AppearOnce(vector<int> &nums){
    int n = nums.size();
    vector<int>result;

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count==1){
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,5,5,6,6,7,8,8};
    vector<int>result= AppearOnce(nums);

    cout <<"\t"<< "Apperace once in array"<<endl;
    cout<<"\t"<<"\t";
    for(auto it : result){
        cout<<it<<" ";
    }
}