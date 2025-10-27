#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int>nums = {4,1,2,3};
    int n = nums.size();
    int target;
    cout<<"\t"<<"\t"<<"Give the Target Value :- ";
    cin>>target;
    int result = search(nums,n,target);
    cout<<"\t";
    cout<<"The"<<" "<<target<<" "<<"Value are Present on the this index :-"<<" "<<result<<endl;
}