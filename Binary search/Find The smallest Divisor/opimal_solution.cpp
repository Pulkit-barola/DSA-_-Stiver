#include<bits/stdc++.h>
using namespace std;
int FindMax(vector<int>&nums){
	int n =nums.size();
	int Maxi =  INT_MIN;
	    for(int i=0; i<n; i++){
		    Maxi = max(Maxi , nums[i]);
	    }
	    return Maxi ; 
    }

    int SumofD(vector<int>&nums,int div){
	    int sum = 0;
	    int  n = nums.size(); 
	    for(int i = 0; i<n; i++){
		    sum += ceil((double)(nums[i])/(double)(div));
	    }
	    return sum;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
	int low = 1; 
	int high = FindMax(nums);
	int ans = -1; 

	if (n > threshold){
		return -1;
	}
	while(low<=high){
		int mid = low + (high - low)/2;
		if(SumofD(nums, mid)<=threshold){
			ans = mid;
			high = mid - 1;
		}
		else{

			low = mid + 1;
		}
	
	}
	return ans;
    }

    int main(){
        vector<int>nums = { 1 , 3 , 5 , 9};

    int threshold = 6;

    int result = smallestDivisor(nums, threshold);
    cout << "Smallest Divisor = " << result << endl;

    return 0;
    }

