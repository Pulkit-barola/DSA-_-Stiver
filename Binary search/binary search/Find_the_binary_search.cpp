#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>&nums , int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;

        if(nums[mid] == target){
            return mid;
        }
        else  if(nums[mid]>target){
            high = mid -1 ;
        }
        else{
            low = mid + 1;
        }
    }
    return  -1 ;
}

int main() {
    vector<int> nums  = {3,4,5,6,7,8,9,10,15,18};
    int target;
    cout <<"Give the target elemnt to search "<<endl;
    cout<<"\t"<<"\t";
    cin>>target;
    int result = BinarySearch(nums , target );
    cout<<"The elemet find at the index "<<result<<endl;
}