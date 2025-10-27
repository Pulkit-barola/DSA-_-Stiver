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
    int maxi = findmax(Weights);
    int sum = Sum(Weights);
    for(int Capacity = maxi;  Capacity<=sum; Capacity++){
        int DaysRequired = LoadCap(Weights ,Capacity);

        if(DaysRequired<=Days){
            return Capacity;
        }
    }
    return -1;
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