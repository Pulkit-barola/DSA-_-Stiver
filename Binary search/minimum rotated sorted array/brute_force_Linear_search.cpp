#include<bits/stdc++.h>
using namespace std;

int FindMin(vector<int>&nums){
    int n = nums.size();
    int minVal = nums[0];
    for(int i = 1; i<n; i++){
        if(nums[i] < minVal){
            minVal= nums[i];
        }
    }
    return minVal;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << "Minimum element is: " << FindMin(arr) << endl;
    return 0;
}
