//lreaders element are those array where rightmose elemnt are less than the leader
#include<bits/stdc++.h>
using namespace std;
// tc = o(n2) sc = o(n)
vector<int>Leaderselmeent(vector<int>&nums){
    vector<int>ans;
    int n = nums.size();
    for(int i =0; i<n ; i++){
        bool leader = true;
        for(int j = i+1; j<n; j++){
            if(nums[j]>nums[i]){
                leader = false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(nums[i]);
        }
        
    }
    return {ans};
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    
    vector<int> leaders = Leaderselmeent(arr);

    cout << "Leaders in the array: ";
    for (int x : leaders) {
        cout << x << " ";
    }

    return 0;
}