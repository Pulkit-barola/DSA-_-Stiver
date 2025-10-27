#include <bits/stdc++.h>
using namespace std;


    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        // 🔹 Edge case 1: agar sirf ek hi element hai
        if (n == 1) return arr[0];

        // 🔹 Edge case 2: agar first element unique hai
        if (arr[0] != arr[1]) return arr[0];

        // 🔹 Edge case 3: agar last element unique hai
        if (arr[n-1] != arr[n-2]) return arr[n-1];

        // 🔹 Binary search start (safe zone: 1 to n-2)
        int low = 1, high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;

            // ✅ Check: kya mid hi unique element hai?
            if (arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }

            // ✅ Check parity pattern
            if ( (mid % 2 == 1 && arr[mid] == arr[mid-1]) ||
                 (mid % 2 == 0 && arr[mid] == arr[mid+1]) ) {
                // Pattern abhi tak sahi hai → unique right side me hai
                low = mid + 1;
            } else {
                // Pattern toot gaya → unique left side me hai
                high = mid - 1;
            }
        }

        // Problem ke constraints ke hisaab se yaha kabhi nahi aayega
        return -1;
    }
int main() {


    vector<int> arr1 = {1,1,2,2,3,3,4,5,5};
    cout << "Unique element = " << singleNonDuplicate(arr1) << endl;
    // Output: 4

    vector<int> arr2 = {1,1,2,3,3,4,4,5,5};
    cout << "Unique element = " << singleNonDuplicate(arr2) << endl;
    // Output: 2

    vector<int> arr3 = {1,1,2,2,3,3,4,4,5};
    cout << "Unique element = " << singleNonDuplicate(arr3) << endl;
    // Output: 5

    return 0;
}
