#include<bits/stdc++.h>
using namespace std;

vector<int>Maximumconsective(vector<int>nums){
    int maxi = 0;
    int cnt = 0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            cnt++;
            maxi = max(maxi,cnt);


        }
        else{
            cnt = 0;
        }
    }
    return{maxi};
}

int main(){
    vector<int>nums = {0,1,0,0,1,0,1,1,1,0};

    vector<int>result = Maximumconsective(nums);

    cout<<"\t"<<"Maximum consective zeroes"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}