#include<bits/stdc++.h>
using namespace std;

vector<bool>sum_2_problem(vector<int>&nums , int target){
    for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums.size(); j++){
            if(i==j){
                continue;
            }
            if(nums[i]+nums[j]==target){
                return {true} ;
            }
        }
    }
    return {false};
}
int main(){
    vector<int>arr = {1,2,34,5,6,10,45,14};
    int target;
    cout<<"Give me target value";
    cin>>target;

    vector<bool>result = sum_2_problem(arr,target);
    cout<<boolalpha;
    cout<<"The sum of two number which gather target value :- "<<target<<endl;
    for(auto it : result){
        cout<<"\t"<<it<<" ";
        
    }
}