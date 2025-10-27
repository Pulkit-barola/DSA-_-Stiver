// it is used when bubble sort have optimization  for time complexity where the sorting is sored

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void bubblesort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        bool isswap = false;
        cout<<"Outer loop";
        for(int j=0; j<n-i-1; j++){
            cout<<"Inner loop";
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if (!isswap){
            //already sort
            return;
        }

    }
    print(arr,n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"UnSorted Array";
    print(arr,n);
    cout<<"Sorted Array";
    bubblesort(arr,n);
    return 0;

}