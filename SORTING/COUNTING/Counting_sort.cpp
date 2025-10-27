#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countsort(int arr[], int n){
    int freq[10000]= {0};
    int minval = INT_MAX;
    int maxval = INT_MIN;
    for(int i=0; i<n; i++){
        maxval = max(maxval, arr[i]);
        minval = min(minval,arr[i]);
    }

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=minval; i<=maxval; i++  ){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr,n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,1,2,4};
    int n= sizeof(arr)/sizeof(int);
    countsort(arr,n);
}