#include<bits/stdc++.h>
using namespace std;


bool CheckSortedArray(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<= arr[i-1]){
            return false;
        }
        
    }
    return true;
}

int main(){
    int arr[] = {4,5,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int result = CheckSortedArray(arr,n);

    if(result){
        cout<<"SORTED ARRAY";
    }
    else{
        cout<<"Not sorted array";
    }
}