#include<bits/stdc++.h>
using namespace std;
bool bs(vector<int>Matrics , int target){
    int n = Matrics.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + high/2;
        if(Matrics[mid] == target){
            return true;
        }
        else if (target > Matrics[mid]){
            low = mid +1 ;
        }
        else{
            high = mid - 1 ;
        }
    }
    return false;
}
bool Search2Dmatrix(vector<vector<int>>&Matrics){
    int n = Matrics.size();
    int m = Matrics[0].size();
    int target;
    cout<<"\n"<<"Enter the target Value"<<endl;
    cout<<"\t";
    cin>>target;
    for(int i = 0; i<n; i++){
        if(Matrics[i][0]<=target && target<=Matrics[i][m-1]){
            return bs(Matrics[i],target);
        }
    }
    return false;
}
int main(){
vector<vector<int>>Matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    bool result = Search2Dmatrix(Matrix);
    // if(result==true){
    //     cout<<"I FIND THE VALUE NO THAT YOU WANT SEARCH";
    // }
    // else{
    //     cout<<"SOORY ! I DID' NT FIND THAT YOU WANT TO SEARCH ";
    // }
    cout<<"The ans is "<<boolalpha<<result<<endl;
}