#include<bits/stdc++.h>
using namespace std;

int Sum(vector<int>&nums){
    int sum = 0;
    int n = nums.size(); 
    for(int i = 0; i<n; i++){
        sum+=nums[i];
    }
    return sum;
}
int findmax(vector<int>&nums){
    int Maxi = INT_MIN;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        Maxi = max(Maxi , nums[i]);
    }
    return Maxi;
}

int LoadCap(vector<int>&nums, int Capcaity){
    int days = 1;
    int Load = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(Load+nums[i]>Capcaity){
            days++;
            Load = nums[i];
        }
        else{
            Load += nums[i];
        }
    }
    return days;
}

int DaysReq(vector<int>&Weights , int Days){
    int low = findmax(Weights);
    int high = Sum(Weights);
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int DaysRequired = LoadCap(Weights , mid);

        if(DaysRequired<=Days){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans ; 
}

int main(){
    int Days;
    vector<int>Weights = {1,5,7,9};
    cout<<"\t";
    cout<<"Give  the D Days to Load THis package "<<endl;
    cin>>Days;
    int result = DaysReq(Weights , Days);
    cout<<"Minimum capacity required to ship in "<< Days <<" days is "<< result <<endl;
}