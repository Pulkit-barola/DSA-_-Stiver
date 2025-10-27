#include<bits/stdc++.h>
using namespace  std;

vector<int>Sum2problem(vector<int>&nums , int target){
    for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums.size(); j++){
            if(i == j){
                continue;

            }
            if(nums[i]+nums[j]==target){
                    return {i  , j };
            }
        }
    }
    return {-1};
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,15,12,45};
    int target;
    cout<<"Give me target value";
    cin>>target;
    vector<int>result = Sum2problem(arr , target);

     cout<<"The sum of two number which gather target value :- "<<target<<endl;
     cout<<"\t"<<"\t";
    for(auto it : result){
        cout<<it<<" ";
    }
    cout<<endl;
}