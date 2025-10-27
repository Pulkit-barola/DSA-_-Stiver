#include<bits/stdc++.h>
using namespace std;
long long calculateHours(vector<int>& piles, int speed) {
        long long totalHours = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            // Using ceil to determine hours needed per pile
            totalHours += ceil((double)piles[i] / (double)speed);
        }
        return totalHours;
    }

    // Helper function to get the maximum pile size
    int getMaxPile(vector<int>& piles) {
        int maximum = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maximum = max(maximum, piles[i]);
        }
        return maximum;
    }

    // Main function to find the minimum eating speed
    int minimumRateToEatBananas(vector<int>& piles, int h) {
        long long low = 1;
        long long high = getMaxPile(piles);
         long long ans = 1e9;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long hoursNeeded = calculateHours(piles, mid);
            if (hoursNeeded <= h) {
                // Try a lower speed
                ans = mid;
                high = mid - 1;
            } else {
                // Need a higher speed
                low = mid + 1;
            }
        }
        return ans; // This is the smallest speed that works
    }

    int main(){
    vector<int>piles = {3,7,9,11};
    int h = 9;
    int result = minimumRateToEatBananas(piles , h);
    cout<<result;      
}