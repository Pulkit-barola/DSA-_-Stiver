#include <bits/stdc++.h>
using namespace std;

bool canweplacecows(vector<int>& stalls, int dist, int cows) {
    int n = stalls.size();
    int Lastcow = stalls[0];
    int CntCow = 1;
    for (int i = 1; i < n; i++) {   // start from next stall
        if (stalls[i] - Lastcow >= dist) {
            Lastcow = stalls[i];
            CntCow++;
        }
        if (CntCow >= cows) return true;
    }
    return false;
}

int agreessioncows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;   // ✅ fixed
        if (canweplacecows(stalls, mid, cows)) {
            ans = mid;        // save possible answer
            low = mid + 1;    // try bigger distance
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {0, 3, 4, 7, 10, 9};  // stalls positions
    int k = 4;                                // number of cows

    int ans = agreessioncows(stalls, k);

    cout << "The maximum possible minimum distance is: " << ans << endl;
    return 0;
}
