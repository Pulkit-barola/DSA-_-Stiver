#include<bits/stdc++.h>
using namespace std;
        // range from 1 to n
int MissingNumber(vector<int> &nums , int n){
    int sum = n*(n+1)/2;

    int actual_sum = 0; 
    for(int i=0; i<n; i++){
        actual_sum += nums[i];
    }
    int missing_number = sum-actual_sum;
    return missing_number;
}

int main(){
    vector<int>nums = {1,2,4,5};
    int size= nums.size();
    int n= size+1;
    
    int result = MissingNumber(nums , n);

    cout<<result;
}