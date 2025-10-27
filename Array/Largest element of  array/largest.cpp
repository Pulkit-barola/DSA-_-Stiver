#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {3,4,5,1,8,2};
    int n = sizeof(arr)/sizeof(int);

    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

    }
    cout<<largest<<endl;

}