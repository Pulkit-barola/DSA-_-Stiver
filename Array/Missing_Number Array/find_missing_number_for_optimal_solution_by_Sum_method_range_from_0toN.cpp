#include<bits/stdc++.h>
using namespace std;

vector<int>Missing_Number(vector<int> &nums){
    int n = nums.size();
    int sum = n*(n+1)/2;
    int missing_number ;
    int actual_sum = 0; 
    for(int i=0; i<n; i++){
        actual_sum += nums[i];
    }
    missing_number = sum - actual_sum;

    return {missing_number};   // itis usedfor return the vector
}


int main(){
    vector<int> nums= {2,1};

    vector<int> result = Missing_Number(nums);
    for (auto it : result){
        cout<<it;
    }
}