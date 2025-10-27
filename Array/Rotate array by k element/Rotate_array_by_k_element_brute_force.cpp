#include<bits/stdc++.h>
using namespace std;

void leftrotate(vector<int> &arr , int k ){
    int n = arr.size();
     k = k%n;
     int temp[k];

     for(int i=0; i<k; i++){
        temp[i] = arr[i];
     }

     for(int i=k; i<n; i++){
        arr[i-k]= arr[i];
     }

     for(int i=n-k; i<n; i++){
        arr[i]=temp[i-(n-k)];
     }

}

int main(){
    vector<int> arr = {4,5,6,7,8,9};
    int n = arr.size();
    leftrotate(arr , 3);
    for(int i = 0; i<n; i++){
        cout <<" "<<arr[i];
    }
}