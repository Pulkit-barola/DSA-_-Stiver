#include<bits/stdc++.h>
using namespace std;

int MaximumSubarray(vector<int>&arr){
    int Maxi = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        int sum = 0;
        for(int j=i; j<arr.size(); j++){
            sum+=arr[j];

            Maxi = max(sum , Maxi);
        }
        
    }
    return Maxi;
}


int main() {
    vector<int>arr = {1,2,-1,2,-3,-4,2,5,7,9};

    int result = MaximumSubarray(arr);

    cout<<"The sum of maximum sub array :- "<<result<<endl;
}