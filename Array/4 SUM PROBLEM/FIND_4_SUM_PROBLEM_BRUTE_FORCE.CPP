#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>FourSUMProblem(vector<int>nums, int target){
    int n = nums.size();
    set<vector<int>>st;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k =j+1; k<n; k++){
                for(int l = k+1; l<n; l++){
                    long long sum = nums[i]+nums[j]+nums[k]+nums[l];
                    if (sum == target){
                        vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());

                        st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int>nums = {1,2,3,0,5,0,-2,-1,0};
    int key;
    cout<<"----ENTER THE KEY VALUE----"<<endl;
    cin>>key;

    vector<vector<int>>result = FourSUMProblem(nums,key);
    cout<<"The List of Number which have Sum of "<<key<<" "<<endl;
    for(auto it : result){
        for(int final_result : it){
            cout<<final_result<<" ";
        }
        cout<<endl;
    }
}