#include<bits/stdc++.h>
using namespace std;

pair<int , int>FindingFloorValAndCiel(vector<int>&nums, int x){
    int n = nums.size();
    int Low = 0;
    int high = n-1;
    int FloorVal = -1, CielVal = -1;
    while(Low<=high){
        int mid = Low + (high-Low)/2;
        if(nums[mid]==x){
            return {nums[mid],nums[mid]};
        }
        else if (nums[mid]<=x){
            FloorVal = nums[mid]+1;
            Low = mid+1;

        }
        else{
            CielVal = nums[mid];
            high = mid-1;
        }
    }
    return {FloorVal , CielVal};
}

int main() {
    vector<int>nums = {4,5,6,7,8,15,25,30};
    int x;
    cout<<"\t"<<" Enter the Target Value"<<endl;
    cout<<"\t"<<"\t";
    cin>>x;
    pair<int , int>result =FindingFloorValAndCiel(nums , x);
    cout << "Floor of " << x << " = " << result.first << endl;
    cout << "Ceil of " << x << " = " << result.second << endl;

    return 0;
} 