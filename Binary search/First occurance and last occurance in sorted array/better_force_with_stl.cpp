#include <bits/stdc++.h>
using namespace std;

pair<int,int> firstAndLastOccurrence(int arr[], int n, int x) {
    // lower_bound returns a pointer here
    int* lb = lower_bound(arr, arr + n, x);

    if (lb == arr + n || *lb != x) {
        return {-1, -1}; // element not found
    }

    int first = lb - arr; // index of first occurrence

    int* ub = upper_bound(arr, arr + n, x);
    int last = ub - arr - 1; // index of last occurrence

    return {first, last};
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    auto ans = firstAndLastOccurrence(arr, n, x);

    if (ans.first == -1)
        cout << "Element not found\n";
    else
        cout << "First occurrence: " << ans.first 
             << ", Last occurrence: " << ans.second << endl;

    return 0;
}
