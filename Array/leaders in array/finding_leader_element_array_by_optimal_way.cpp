#include<bits/stdc++.h>
using namespace std;

vector<int>Leaderarray(vector<int>&nums){
    vector<int>result;
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i = n-1; i>=0; i--){
        if(nums[i]>maxi){
            result.push_back(nums[i]);
        }
     maxi = max(maxi,nums[i]);
     
    }
    sort(nums.begin(), nums.end());
    return result; 
}

int main(){
    vector<int>nums = {10,22,12,3,0,6};

    vector<int>result = Leaderarray(nums);
    cout<<"Leader element array ";
    cout << "Leader element array: ";
    for (int it : result) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
    //     cout<<it;
    // } 
}