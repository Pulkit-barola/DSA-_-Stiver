#include<bits/stdc++.h>
using namespace std;

bool peakelement(vector<vector<int>>&matrix , int i, int j , int n, int m){
    int val = matrix[i][j];

    if(i>0 && matrix[i-1][j]>val){
        return false;
    }
    if(i<n-1 && matrix[i+1][j]>val){
        return false;
    }
    if(j>0 && matrix[i][j-1]>val){
        return false;
    }
    if(j<0 && matrix[i][j+1]>val){
        return false;
    }
    return true;
}

pair<int,int> peak(vector<vector<int>>&matrix ){
    int n = matrix.size();
    int  m = matrix[0].size();
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(peakelement(matrix,i,j,n,m)==true){
                return {i,j};
            }
        }
    }

    return {-1,-1};
}

int main() {
    vector<vector<int>> matrix = {
        {10, 8, 10, 10},
        {14, 13, 12, 11},
        {15, 9, 11, 21},
        {16, 17, 19, 20}
    };

    pair<int,int> result= peak(matrix);

    if (result.first != -1) {
        cout << "Peak element found at (" << result.first << "," << result.second << ") = " 
             << matrix[result.first][result.second] << endl;
    } else {
        cout << "No peak found" << endl;
    }

    return 0;
}