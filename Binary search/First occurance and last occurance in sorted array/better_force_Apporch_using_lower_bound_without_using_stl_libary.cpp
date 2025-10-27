#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) { 
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


int UpperBound(vector<int> arr, int n, int x) { 
	int low  = 0;
	int high = n-1;
	int ans = n;
	while(low<= high){
		int mid = low + (high - low)/2;

		if(arr[mid]>x){
			ans  = mid ; 
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

pair<int,int>Occurance(vector<int>&nums,int k){
	int n = nums.size();
	int lb = lowerBound(nums , n, k);
	if(lb == n || nums[lb] != k){
		return {-1, -1};
	}
	return{lb , UpperBound(nums,n,k)-1};


}

int main(){
    vector<int>nums = {4,4,4,5,5,9,9,9,9,9,10,10,10,11,15,15,15,45,56};
     int x;
    cout<<"\t"<<" Enter the Target Value"<<endl;
    cout<<"\t"<<"\t";
    cin>>x;
    pair<int , int> result = Occurance(nums , x);

	cout<<result.first<<result.second<<endl;
    
}
