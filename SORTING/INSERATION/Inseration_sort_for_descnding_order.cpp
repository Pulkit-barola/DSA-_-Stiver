#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inserationsort(int arr[] , int n){

    for(int i = 1; i<n; i++){
        int key = arr[i]; 
        int j = i-1;

        while(j>=0 && arr[j]<key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }
    print(arr,n);

}


int main(){
    int arr[] = {23,15,42,95,21,452,74,2};
    int n = sizeof(arr)/sizeof(int);
    inserationsort(arr, n);
}