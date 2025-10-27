#include<bits/stdc++.h>
using namespace std;

pair<int , int>Search2Dmatrix(vector<vector<int>>&matrix){
    int n = matrix.size(); 
    int m = matrix[0].size();
    int target;
    cout<<"\n"<<"Enter the target Value"<<endl;
    cout<<"\t";
    cin>>target;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j]==target){
                return {i,j};
            }
        }
    }
    return {-1 , -1};
}

int main(){
    vector<vector<int>>Matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    pair<int,int> result = Search2Dmatrix(Matrix);
    // if(result==true){
    //     cout<<"I FIND THE VALUE NO THAT YOU WANT SEARCH";
    // }
    // else{
    //     cout<<"SOORY ! I DID' NT FIND THAT YOU WANT TO SEARCH ";
    // }
    cout<<"The ans of indexing "<<result.first<<" "<<result.second<<endl;
}