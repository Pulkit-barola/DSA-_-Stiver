#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&matrix , int target){
    int low = 0;
    int high = matrix.size() - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(matrix[mid]==target){
            return mid;
        }
        else if (target>matrix[mid]){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
pair<int,int> Search2D(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();
    int target;
    cout<<"\n"<<"Enter the target Value"<<endl;
    cout<<"\t";
    cin>>target;
    for(int i = 0; i<n ; i++){
        int id = bs(mat[i],target);
        if(id!=-1){
            return{i,id};
        }
    }
    return {-1, -1};
}


int main() {
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    pair<int,int> ans = Search2D(mat);

    if (ans.first != -1)
        cout << "Found at Row = " << ans.first 
             << ", Column = " << ans.second << endl;
    else
        cout << "Not Found!" << endl;
}