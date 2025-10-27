#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n , int key){
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {2,4,1,7,3};
    int n = sizeof(arr)/sizeof(int);

    int key; 
    cout<<"Give me element that you will find out";
     cin>>key;
    int index = linearSearch(arr,n,key);

    if (index != -1) {
        cout << "Element " << 5 << " found at index " << index << " (first to last)" << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
