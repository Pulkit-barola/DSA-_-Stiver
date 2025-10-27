#include<bits/stdc++.h>
using namespace std;

void nextpermution(vector<int>&nums){
    next_permutation(nums.begin(),nums.end());
    return ;
}

int main(){
    vector<int>arr = {1,2,3};

    nextpermution(arr);

    for(auto it : arr){
        cout<<" "<<it;
    }
    cout<<endl;
}
