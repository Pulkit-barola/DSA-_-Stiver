#include<bits/stdc++.h>
using namespace std;

    vector<int>Maximumconsectiveone(vector<int>&nums){
        int maximum = 0; 
        int cnt = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                cnt++;
                maximum = max(maximum,cnt);


            }
            else{
                cnt = 0;
            }
        }
        return{maximum};
    }


int main(){
    vector<int>nums = {1,1,0,0,1,0,1,0,0,0,1};

    vector<int>result = Maximumconsectiveone(nums);

    cout<<"\t"<<"Maximum consextive one "<<endl;
    cout<<"\t"<<"\t";

    for(auto it : result){
        cout<<it;
    }
}