#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[] , int n){
    for (int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            
        }
        swap(arr[i],arr[minIndex]);
    }
    print(arr,n);
}

int main(){
    int arr[] = {4,2,3,1,8,7};
    int n = sizeof(arr)/sizeof(int);

    cout<<"\t-----UNSORTED ARRAY-----\t"<<endl;
    print(arr,n);

    cout<<"\t-----Sorted Array-----\t"<<endl;
    selectionsort(arr,n);
    
}