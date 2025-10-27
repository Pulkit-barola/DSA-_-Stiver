#include<bits/stdc++.h>
using namespace std;

vector<int>Maximum(vector<int> &nums){
    long long sum = 0;
    int maxi = INT_MIN;
    int start;
    int ansStart = -1;
    int ansEnd = -1;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        sum+=nums[i];

        if(sum == 0){
            start = i;
        }

        if(sum>maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;

        }

        if(sum<0){
            sum = 0;
            start = i+1;
        }

        
        
    }
    vector<int>subarray;

        for(int i = ansStart; i<ansEnd; i++){
            subarray.push_back(nums[i]);
        }
        subarray.push_back(maxi);

    return subarray;
}

int main() {
    vector<int> arr = {1, 2, -1, 2, -3, -4, 2, 5, 7, 9};

    vector<int> result = Maximum(arr);

    cout << "THE MAXIMUM SUBARRAY IS:\n\t";
    for (int i = 0; i < result.size()-1; i++) {
        cout << result[i] << " ";
    }

    cout << "\nMAXIMUM SUM: " << result.back() << endl;

    return 0;
}

