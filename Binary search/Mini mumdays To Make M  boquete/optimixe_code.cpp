#include<bits/stdc++.h>
using namespace std;

 bool possible(vector<int> &arr ,int Days , int m , int k){
        int cnt = 0;
        int noofBoquete = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i]<=Days){
                cnt++;
            }

            else{
                noofBoquete += cnt/k;
                cnt = 0;
            }
        }
        noofBoquete += cnt/k;
        if(noofBoquete >= m){
            return true;
        }
        return false;
    }

    long long minDays(vector<int>& bloomDay, int m, int k) {
        long long val = 1LL*m*k;
        int n = bloomDay.size();
        if(val>n){
            return -1;
        }
        int maxi =  INT_MIN;
        int mini = INT_MAX;

        for(int i = 0; i<n; i++){
            maxi = max(maxi , bloomDay[i]);
            mini = min(mini , bloomDay[i]);
        }
        

        // using binary search
        int low = mini, high = maxi, ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay , mid, m , k )==true){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return ans;
    }

    int main() {
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;   // bouquet size
    int m = 2;   // number of bouquets needed
    long long ans = minDays(arr, k, m);

    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
}