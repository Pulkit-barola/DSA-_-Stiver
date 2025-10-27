#include<bits/stdc++.h>
using namespace std;

bool ischecksortedarray(vector<int> &nums){
    int count = 0;
    int n = nums.size();

    for(int i=1; i<n; i++){
        if(nums[i]>nums[(i+1)%n]){
            count++;
        }
    }
    return count<=1;
}

int main(){
    vector<int>arr = {1,2,3,4};

    bool result = ischecksortedarray(arr);

    if (result) {
        cout << "Sorted and Rotated Array (or normal sorted)" << endl;
    } else {
        cout << "Not sorted and rotated array" << endl;
    }
}