#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubblesort(int arr[], int n){
    for(int i=0; i<n-i; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
        
    }

    print(arr,n);
}

int main(){
    int arr[] = {2,8,1,7,5,4};
    int n = sizeof(arr)/sizeof(int);

    cout<<"\t-----UNSORTED ARRAY-----\t"<<endl;
    print(arr,n);
    cout<<endl;
    cout<<"\t-----SORTED ARRAY-----\t"<<endl;;
    bubblesort(arr,n);

}