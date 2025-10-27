#include<bits/stdc++.h>
using namespace std;

int Searchingrotated(vector<int>&nums, int target ){
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int>nums = {7,8,9,1,2,3,4,5,6};
    int target;
    cout<<"\t"<<"\t"<<"Give the Target Value :- ";
    cin>>target;
    int result = Searchingrotated(nums,target);
    cout<<"\t";
    cout<<"The"<<" "<<target<<" "<<"Value are Present on the this index :-"<<" "<<result<<endl;
}