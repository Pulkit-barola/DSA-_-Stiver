#include<bits/stdc++.h>
using namespace std;

vector<int>Sum2Problem(vector<int>&nums , int target){
    sort(nums.begin(),nums.end());

    int left = 0;
    int right = nums.size()-1;

    while(left<right){
        int sum = nums[left]+nums[right];

        if(sum==target){
            return{nums[left],nums[right]};
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return{};

}

int main(){
    vector<int>arr = {1,2,3,4,8,9};
    int target ; 
    cout<<"Give the target value";
    cin>>target;
    vector<int>result = Sum2Problem(arr,target);
    if(!result.empty()){
        cout << "Pair found: " << result[0] << " + " << result[1] << " = " << target << endl;
    }
    else{
        cout<<"No value are present which add give target value";
    }
}