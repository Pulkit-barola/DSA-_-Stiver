#include<bits/stdc++.h>
using namespace std;

void print(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {2,5,1,5,4,5,2};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n);
    print(arr,n);

    sort(arr , arr+n, greater<int>());
    print(arr,n);

}