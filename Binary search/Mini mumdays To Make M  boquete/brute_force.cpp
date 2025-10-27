#include<bits/stdc++.h>
using namespace std;

bool possibleDays(vector<int>&arr , int Days, int m , int k){
    int cnt = 0;
    int noofBoquent = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i]<=Days){
            cnt++;
        }
        else{
            noofBoquent += cnt/k;
            cnt = 0;
        }
    }
    noofBoquent += cnt/k;
    if(noofBoquent>=m){
        return true;
    }
    else{
        return false;
    }
}

int BollomingDAYS(vector<int>&nums, int m , int k){
    long long val = 1LL*m*k;
    int n = nums.size();
    if(val>n){
        return -1;
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        mini = min(mini,nums[i]);
        maxi = max(maxi ,nums[i]);
    }

    for(int i = mini; i<=maxi; i++){
        if(possibleDays(nums,i,m,k)==true){
            return i;
        }
           
    }
    return -1; 
}

int main() {
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;   // bouquet size
    int m = 2;   // number of bouquets needed
    int ans = BollomingDAYS(arr, k, m);

    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
}