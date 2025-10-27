#include<bits/stdc++.h>
using namespace std;

vector<bool>Sum2Problem(vector<int>&nums,int target){

    
    int left = 0;
    int right = nums.size()-1;
    sort(nums.begin(),  nums.end());
    while(left<right){
        int sum = nums[left]+nums[right];
        if(sum == target){
            return {true};
        }
        if(sum<target){
            left++;
        }
        else{
            right--;
        }
        
    }
    return {false};
}

int main(){
    vector<int>arr = {1,2,34,5,6,10,45,14};
    int target;
    cout<<"Give me target value";
    cin>>target;

    vector<bool>result = Sum2Problem(arr,target);
    cout<<boolalpha;
    cout<<"The sum of two number which gather target value :- "<<target<<endl;
    for(auto it : result){
        cout<<"\t"<<it<<" ";
        
    }
}