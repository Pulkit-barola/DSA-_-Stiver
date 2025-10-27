#include<bits/stdc++.h>
using namespace std;

int DuplicesSorted(vector<int> &arr){
    int i =0;
    for(int j=0; j<arr.size(); j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}

int main(){
    vector<int> arr = {1,2,2,3,3,4,5,6,6,6,7};

    int result = DuplicesSorted(arr);
    if(result){
        cout<<"\t"<<"\t"<<"\t"<<"UNIQUE ELEMENT"<<endl;
        for(int i=0; i<result; i++){
            cout<<"\t"<<arr[i];
        }
    }
    else{
        cout<<"Unsorted element ";
    }
}