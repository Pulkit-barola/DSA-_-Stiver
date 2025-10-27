#include<bits/stdc++.h>
using namespace std;


    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        long long ans = -1;
        long long low = 1, high = x;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x) {
                return mid;
            } 
            else if (mid * mid < x) {
                ans = mid;
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
