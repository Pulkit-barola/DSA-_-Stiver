#include<bits/stdc++.h>
using namespace std;

int RowMaximum(vector<vector<int>>nums){
    int n = nums.size();
    int m = nums[0].size();

    int index = -1;
    int max_cnt = 0;

    for(int i= 0;i<n; i++){
        int cnt_row = 0;
        for(int j = 0; j<m; j++){
            cnt_row += nums[i][j];

        }
        if(cnt_row  > max_cnt){
            index=i;
            max_cnt = cnt_row;
        }
    }
    if(max_cnt==0){
        return -1;
    }
    return index;
}

int main(){
    vector<vector<int>> matrix = {{0, 0, 1}, {0, 1, 1}, {0, 0, 0}};
    cout << "The row with maximum no. of 1's index  is: " <<
         RowMaximum(matrix) << '\n';
}
