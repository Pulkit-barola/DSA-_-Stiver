#include<bits/stdc++.h>
using namespace std;


void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}


void insrationsort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
    print(arr, n);
}
int main(){
    
    int arr[] = {23,45,96,12,8,71,52};
    int n = sizeof(arr)/sizeof(int);

    insrationsort(arr,n);
    

}