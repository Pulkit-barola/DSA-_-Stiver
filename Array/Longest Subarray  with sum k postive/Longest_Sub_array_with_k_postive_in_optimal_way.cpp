// using two pointerapproch

#include<bits/stdc++.h>
using namespace std;

vector<int>SubArray(vector<int> &a,int key){
    long long sum = a[0];
    int left = 0 , right = 0;
    int maxlen = 0;
    int n = a.size();
    while(right<n){
        sum += a[right];
        while(left<= right && sum>key){
            sum -= a[left];
            left++;
        }
        if(sum == key){
            maxlen = max(maxlen , right-left+1);
        }
        right++;
        

    }
    return {maxlen};
}

int main(){
    vector<int>nums = {1,2,3,4,2,1,5,1,5,3,4};
    int target  = 3; 
    vector<int>result =SubArray(nums,target);
    cout<<"\t"<<" subarray with k"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}