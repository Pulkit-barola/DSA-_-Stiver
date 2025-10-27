#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Threesomeproblem(vector<int>&nums){
    set<vector<int>> st;
    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());

                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int>nums = {-1,0,1,2,4,2,5,0,-2};
    vector<vector<int>>result = Threesomeproblem(nums);
    cout<<"The list which are have sum  zero"<<endl;
    for(auto it : result){
        for(int num : it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}