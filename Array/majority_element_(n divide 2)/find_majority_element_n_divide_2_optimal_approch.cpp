#include <bits/stdc++.h>
using namespace std;

vector<int>MajorityElement(vector<int> &nums){
    int el = 0;
    int cnt = 0;
    for(int i = 0; i<nums.size(); i++){
        if(cnt==0){
            cnt = 1;
            el = nums[i];

        }
        else if(el == nums[i]){
            cnt++;
        }
        else{
            cnt--;
        }

    }
    for(int i = 0; i<nums.size(); i++){
        if(el==nums[i]){
            cnt++;
        }
        if(el>(nums.size()/2)){
            return {el};
        }

        return {-1};
    }
}

int main(){
    vector<int>arr = {2,2,2,1,4,5,1,5,12,1,2,1,4,2,3,1};
     int n = arr.size();

    vector<int>result =  MajorityElement(arr);
    for(auto it : result){
        cout<<it<<endl;
    }
    cout<<n;
}