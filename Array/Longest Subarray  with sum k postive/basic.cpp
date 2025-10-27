#include<bits/stdc++.h>
using namespace std;

vector<int> Subarray(vector<int>arr , int key){
    map<long long, int > presum;
    long long sum = 0;
    int maxlen = 0; 

    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];

        if(sum == key){
            maxlen = max(maxlen , i+1);
        }

        int rem = sum - key;
        if(presum.find(rem) != presum.end()){
            int len = i - presum[rem];
            maxlen = max(maxlen , len);
        }
        presum[sum]  = i;
    }
    return {maxlen};
}

int main(){
    vector<int>nums = {1,2,3,4,5,1,2};
    int key = 5;
    vector<int> result = Subarray(nums ,key );

    cout<<"\t"<<"Longest subarray with k"<<endl;
    cout<<"\t"<<"\t";
    for (auto it : result){
        cout<<it;    }
}