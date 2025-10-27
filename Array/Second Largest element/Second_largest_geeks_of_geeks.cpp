#include<bits/stdc++.h>
using namespace std;  

int secondlargest(vector<int>arr, int n){
    int largest = INT_MIN;
    int secondlargest = -1;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest = arr[i];
        }
    }
    if(secondlargest==INT_MIN){
        return -1;         // this case will work when all element are equal so they have not indentify second largest
    }
    return secondlargest;
}

class Solution {
  public:
    int SecondLargest(vector<int> &arr) {
        return secondlargest(arr , arr.size());
    }
};

int main() {
    vector<int> arr = {4, 4, 4, 4, 4};
    Solution sol;
    int ans = sol.SecondLargest(arr);
    cout << "Second Largest: " << ans << endl;
    return 0;
}