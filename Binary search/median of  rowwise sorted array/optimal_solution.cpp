#include <bits/stdc++.h> 
using namespace std;
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

int blackbox(vector<vector<int>> &mat, int n, int m, int x){
	// here x as likeas mid value which we want campare to find small equal
	int cnt = 0;
	for(int i = 0; i<n; i++){
		cnt += UpperBound(mat[i] , m , x);
	}
	return cnt;
}
int findMedian(vector<vector<int> > &arr, int n, int m){
	
	int low = INT_MAX;
	int high = INT_MIN;
	n = arr.size();
	m = arr[0].size();
	for(int i = 0; i<n; i++){
		low = min(low,arr[i][0]);
		high = max(high,arr[i][m-1]);
	}
	int req = n*m/2;
	while(low<=high){
		int mid = low + (high-low)/2;
		int smallequal = blackbox(arr,n,m,mid);
		if(smallequal<=req){
			low = mid+1;
		}

		else{
			high = mid - 1;
		}
	}
	return low;
	
}
int main() {
    int n, m;
    cin >> n >> m;   // rows and cols
    // Breakdown:

// vector<vector<int>> arr → ek vector banata hai jisme har element bhi ek vector<int> hoga (matlab row).

// (n, vector<int>(m)) → ye bolta hai ki arr ke andar n rows ho, aur har row ek vector ho jisme m columns ho.
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << findMedian(arr, n, m);
    return 0;
}
