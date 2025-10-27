#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int> &arr, int start, int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void rotatearray(vector<int> &arr, int k){
    int n  = arr.size();
    k = k%n;

    Reverse(arr, 0, k-1);
    Reverse(arr, k, n-1);
    Reverse(arr,0,n-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    rotatearray(arr, 2);
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
}