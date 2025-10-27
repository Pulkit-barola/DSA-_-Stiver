#include<bits/stdc++.h>
using namespace std;

int Setinsert(vector<int> arr, int n, int x) { 
	int low  = 0;
	int high = n-1;
	int ans = n;
	while(low<= high){
		int mid = low + (high - low)/2;

		if(arr[mid]>=x){
			ans  = mid ; 
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

int main() {
    vector<int>nums = {4,5,6,7,8,9,12,15,16,17};
    int x;
    int n = nums.size();
    cout<<"Give the value for x";
    cin>>x;
    int result = Setinsert(nums,n,x);
    cout<<"The result of this :- "<<result;
}