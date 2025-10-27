#include<bits/stdc++.h>
using namespace std;

pair<int,int>FloorANDCielIndexing(vector<int>&nums, int x){
    int n = nums.size();
    int FloorIndx = -1, CielIndx =-1;
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(nums[mid] == x){
            return {mid , mid};
        }
        else if (nums[mid]<=x){
            FloorIndx = mid;
            low = mid+1;

        }
        else {
            CielIndx = mid;
            high = mid -1;
        }
    }
    return {FloorIndx , CielIndx};
}

int main() {
    vector<int>nums = {4,5,6,7,8,15,25,30};
    int x;
    cout<<"\t"<<" Enter the Target Value"<<endl;
    cout<<"\t"<<"\t";
    cin>>x;
    pair<int , int>result =FloorANDCielIndexing(nums , x);
    cout << "Floor of " << x << " = " << result.first << endl;
    cout << "Ceil of " << x << " = " << result.second << endl;

    return 0;
} 