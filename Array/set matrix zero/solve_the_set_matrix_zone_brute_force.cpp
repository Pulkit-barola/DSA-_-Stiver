

#include <bits/stdc++.h>
using namespace std;

// mark full row as -1 (only if element is not 0 already)
void markRow(vector<vector<int>>& matrix, int row) {
    int n = matrix[0].size();
    for (int j = 0; j < n; j++) {
        if (matrix[row][j] != 0) {
            matrix[row][j] = -1;
        }
    }
}

// mark full column as -1 (only if element is not 0 already)
void markCol(vector<vector<int>>& matrix, int col) {
    int m = matrix.size();
    for (int i = 0; i < m; i++) {
        if (matrix[i][col] != 0) {
            matrix[i][col] = -1;
        }
    }
}

// function for binary matrix using -1 marking
void setZeroesBinary(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // first pass → mark -1 where row/col has 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, i);
                markCol(matrix, j);
            }
        }
    }

    // second pass → convert all -1 to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroesBinary(mat);

    // print matrix
    for (auto &row : mat) {
        for (auto x : row) cout << x << " ";
        cout << "\n";
    }
}

