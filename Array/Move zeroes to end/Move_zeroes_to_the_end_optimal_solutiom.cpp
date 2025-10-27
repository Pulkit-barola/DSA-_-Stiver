#include<bits/stdc++.h>
using namespace std;

 vector<int> MoveZeroestotheend(vector<int> &arr ){
    int  n = arr.size();
    int  j = -1;
    for(int i =0; i<n;  i++){
        if(arr[i]==0){
            j=i;
            break;

        }
    }
    if(j==-1){
        return arr;
    }

    for(int i = j+1;  i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    return arr;
 }

 int main(){
    vector<int> arr  = {2,9,2,8,2,0,9,0,7,0,4};

    vector<int> result = MoveZeroestotheend(arr);
    cout <<"\t"<<"Output:- "<< endl;
    cout <<"\t";
    // for(auto val : result){
    //     cout<<val<<" ";                              // they automatic iterate the result value and  print according to them here val is type of variable             auto are indentify automatic data type
    //}                                         
    for (int i = 0; i < result.size(); i++) {
            int val = result[i];
            cout << val << " ";
    }


 }