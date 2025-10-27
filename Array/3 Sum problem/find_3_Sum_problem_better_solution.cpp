#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        int n =  nums.size();
        for(int i = 0; i<n; i++){
            set<int>hashset;
            for(int j = i+1; j<n; j++){
                int third = - (nums[i]+nums[j]);
                if(hashset.find(third)!=hashset.end()){
                    vector<int>temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }

    int main(){
        vector<int>nums = {-2,1,2,1,5,0,4,0,1};
        vector<vector<int>>result = threeSum(nums);
         for(auto it : result){
        for(int num : it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}