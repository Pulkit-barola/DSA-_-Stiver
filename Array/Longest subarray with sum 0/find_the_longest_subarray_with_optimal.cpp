#include<bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n) {
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;
    
    for(int i=0; i<n; i++) {
        sum += A[i]; // prefix sum banta rahega
        
        if(sum == 0) {
            maxi = i + 1;   // agar sum 0 hua toh subarray 0..i tak hai
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                // agar pehle bhi yeh sum mila hai
                maxi = max(maxi, i - mpp[sum]); // i ka current index mpp[sum] first ka index
            }
            else {
                // first time sum mila toh uska index store karo
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}

int main(){


}