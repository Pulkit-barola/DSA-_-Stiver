#include<bits/stdc++.h>
using namespace std;

void setmatrixzero(vector<vector<int>> &matrics){
    int n = matrics.size();
    int m = matrics[0].size();

    vector<int>row(n,0);
    vector<int>col(m,0);

    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++) {
                if (matrics[i][j] == 0) {
                    row[i] = 1;  // is row ko zero karna hai
                    col[j] = 1;  // is column ko zero karna hai
                }
            }
        }

        // Step 3: Matrix ko update karo
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {  // agar row[i] ya col[j] mark hai
                    matrics[i][j] = 0;    // us cell ko zero kar do
                }
            }
        }
    }


    int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    setmatrixzero(mat);

    // print final matrix
    for(auto &row : mat){
        for(auto x : row){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}