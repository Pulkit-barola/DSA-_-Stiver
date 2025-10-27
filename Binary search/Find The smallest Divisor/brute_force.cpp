#include<bits/stdc++.h>
using namespace std;

int FindMaxi(vector<int>&arr){
        int n = arr.size();
        int maxi = INT_MIN; 
        for(int i = 0; i<n; i++){
            maxi = max(maxi , arr[i]);
        }
        return maxi;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = FindMaxi(nums);
        for(int d = 1; d<=maxi; d++){
            int sum = 0;
            for(int i = 0; i<n; i++){
                sum += ceil((double)(nums[i])/(double)(d));
            }
            if(sum<=threshold){
                return d;
            }
        }
        return -1;
    }

int main(){
    vector<int>nums = { 1 , 3 , 5 , 9};

    int threshold = 6;

    int result = smallestDivisor(nums, threshold);
    cout << "Smallest Divisor = " << result << endl;

    return 0;
}