#include<bits/stdc++.h>
using namespace std;

int  FindMin(vector<int>nums, int n){
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[low]<=nums[mid]){
            ans = min(ans,nums[mid]);
            low = low+1;
        }
        else{
            ans = min(ans,nums[mid]);
            high= high - 1;
        }
    }
    return ans;
}


int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    cout << "Minimum element is: " << FindMin(arr,n) << endl;
    return 0;
}
