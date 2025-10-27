#include<bits/stdc++.h>
using namespace std;

int MovezeroesToend(vector<int> &arr, int n){
    vector<int> temp;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    //step 2 = pick every thing from tempory array  and place in front of orginal array
    int nz = temp.size();
    for(int i=0; i<nz; i++){
        arr[i] = temp[i];
    }

    //step 3 place 0 after  nz element
    for(int i=nz; i<n; i++){
        arr[i] = 0;
    }
}

int main(){
    vector<int> arr = {2,0,1,6,0,2,0,1};

    int n = arr.size();
    int result = MovezeroesToend(arr,n);

    if(result){
        cout<<"\t"<<"Move zeroes to the end"<<endl;
        cout<<"\t";
        for(int i=0; i<n; i++){
            cout<<" "<<arr[i];
        }
    }
}