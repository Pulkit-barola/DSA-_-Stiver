#include<bits/stdc++.h>
using namespace std;

bool Search2dMatrix(vector<vector<int>> &Matrix){   
    int n = Matrix.size();
    int m = Matrix[0].size();
    int target;
    cout<<"\n"<<"Enter the target Value"<<endl;
    cout<<"\t";
    cin>>target;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(Matrix[i][j]==target){
                return true;
            }
        }
    }
    return -1;
}

int main(){
    vector<vector<int>>Matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    bool result = Search2dMatrix(Matrix);
    // if(result==true){
    //     cout<<"I FIND THE VALUE NO THAT YOU WANT SEARCH";
    // }
    // else{
    //     cout<<"SOORY ! I DID' NT FIND THAT YOU WANT TO SEARCH ";
    // }
    cout<<"The ans is "<<boolalpha<<result<<endl;
}