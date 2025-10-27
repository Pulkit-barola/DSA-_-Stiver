#include<bits/stdc++.h>
using namespace std;

int Row2Matrix(vector<vector<int>>&nums){
    int n = nums.size();
    int m = nums[0].size();

    int index = -1;
    int cnt_max  =  0;

    for(int i = 0; i<n; i++){
        int ps = lower_bound(nums[i].begin(), nums[i].end(),1)-nums[i].begin();

        int c = m - ps;
        if(c>cnt_max){
            cnt_max = c;
            index = i;
        }
    }
    
    if(cnt_max == 0){
        return -1;
    }
    return index;
}


int main(){
    vector<vector<int>> matrix = {{0, 0, 1}, {0, 1, 1}, {0, 0, 0}};
    cout << "The row with maximum no. of 1's index  is: " <<
         Row2Matrix(matrix) << '\n';
}
