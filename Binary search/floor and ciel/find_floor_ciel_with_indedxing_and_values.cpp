#include <bits/stdc++.h>
using namespace std;

struct Result {
    int floorVal, ceilVal;
    int floorIdx, ceilIdx;
};

Result floorAndCeil(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int floorVal = -1, ceilVal = -1;
    int floorIdx = -1, ceilIdx = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return {arr[mid], arr[mid], mid, mid};
        }
        else if (arr[mid] < x) {
            floorVal = arr[mid];
            floorIdx = mid;   // ✅ index save
            low = mid + 1;
        }
        else {
            ceilVal = arr[mid];
            ceilIdx = mid;    // ✅ index save
            high = mid - 1;
        }
    }
    return {floorVal, ceilVal, floorIdx, ceilIdx};
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 10, 12, 14};
    int x = 5;

    Result ans = floorAndCeil(arr, x);
    cout << "Floor of " << x << " = " << ans.floorVal 
         << " at index " << ans.floorIdx << endl;
    cout << "Ceil of " << x << " = " << ans.ceilVal 
         << " at index " << ans.ceilIdx << endl;

    return 0;
}
