#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    int xr = 0;
    map<int,int> mpp;
    mpp[xr]++; // initially 0 xor is present once
    int cnt = 0;

    for(int i=0; i<arr.size(); i++){
        xr = xr ^ arr[i];   // prefix xor

        // target value (xr ^ x) must have appeared before
        int k = xr ^ x;
        cnt += mpp[k];

        // store current prefix xor
        mpp[xr]++;
    }
    return cnt;
}

int main()
{
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter target XOR value: ";
    cin >> target;

    int result = subarraysXor(arr, target);
    cout << "Count of subarrays with XOR = " << target << " is: " << result << endl;

    return 0;
}
