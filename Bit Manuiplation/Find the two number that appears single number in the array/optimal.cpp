#include <bits/stdc++.h>
using namespace std;

vector<int> twoOddNum(vector<int> arr) {
    int xorr = 0;

    // 1️⃣ XOR all elements
    for (int num : arr) {
        xorr ^= num;
    }

    // 2️⃣ Get rightmost set bit of xorr (a ^ b)
    int rightmost = xorr & -xorr; 
    // equivalent to: (xorr & (xorr - 1)) ^ xorr

    int b1 = 0, b2 = 0;

    // 3️⃣ Divide numbers into two groups and XOR
    for (int num : arr) {
        if (num & rightmost)
            b1 ^= num;
        else
            b2 ^= num;
    }

    // 4️⃣ Store result
    vector<int> ans = {b1, b2};

    // 5️⃣ Return in decreasing order (required by problem)
    sort(ans.begin(), ans.end(), greater<int>());

    return ans;
}
int main(){
    int n;
    cout<<"Enter total elements"<<endl;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = twoOddNum(arr);

    cout << result[0] << " " << result[1] << endl;

}