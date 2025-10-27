#include<bits/stdc++.h>
using namespace std;

int missingK(vector < int > arr, int n, int k) {
    // Write your code here.
     int low = 0;
     int high = n-1;
     while(low<=high){
        int mid  = low + (high - low)/2;
        int missing = arr[mid] - (mid + 1);
        if(missing<k){
            low = mid + 1;
            
        }
        else{
            high = mid - 1;
        }

     }
    return low + k;
}

int main() {
    vector<int>nums = {4,7,11};
    int k = 3;
    int n = nums.size();
    int result = missingK(nums,n,k);
    cout<<result;
}
