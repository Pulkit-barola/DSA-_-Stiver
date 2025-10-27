#include<bits/stdc++.h>
using namespace std;

int Majority(vector<int> & nums){
    int  n = nums.size();
    for(int i = 0; i<n; i++){
        int cnt  = 0;
        for(int j = 0; j<n; j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt>(n/2)){
            return nums[i];
        }
    }
    return -1;
}


int main(){
    vector<int>nums = {2,2,2,3,1};

    int n = nums.size();
    cout<<"\t"<<"Given array" <<endl;
     cout<<"\t";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    int result = Majority(nums);
    cout << "Majority element: " << result << endl;
}