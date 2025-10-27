#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>RotatedMatrix(vector<vector<int>>&matrix){
    int n = matrix.size();
    vector<vector<int>>Rotated(n , vector<int>(n,0));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            Rotated[j][n-i-1] = matrix[i][j];
        }
    }
    return Rotated;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> ans = RotatedMatrix(mat);

    cout << "Rotated Matrix (90 degrees):\n";
    for(auto row : ans) {
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
}