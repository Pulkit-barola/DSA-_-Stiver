#include<bits/stdc++.h>
using namespace std ; 

int partiaon(int arr[] , int low , int high){
    int i = low;
    int j = high;
    int pivot = arr[low];

    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high){
            i++;
        }

        while(arr[j]>=arr[pivot]&& j>= low){
            j--;
        }
        if(i<j){

            swap(arr[i],arr[j]);
        }
    }
}