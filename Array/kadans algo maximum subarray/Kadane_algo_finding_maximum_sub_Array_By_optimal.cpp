#include<bits/stdc++.h>
using namespace std;

vector<int> KadaneSolutionMaxSubarray(vector<int> &nums){
    int n = nums.size();
    long long sum  = 0;
    int Maxi = INT_MIN;

    for(int i = 0; i<n; i++){
        sum += nums[i];

        if(sum > Maxi){
            Maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return {Maxi};
}

int main() {
    vector<int>arr = {1,2,-1,2,-3,-4,2,5,7,9};


    vector<int>result = KadaneSolutionMaxSubarray(arr);
    cout<<"THE SUM OF MAXIMUM SUB ARRAY"<<endl;
    cout<<"\t";
    for (auto it : result){
        cout<<it;
    }
}