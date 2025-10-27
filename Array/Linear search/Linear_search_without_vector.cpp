#include<bits/stdc++.h>
using namespace std; 

int linearSearch(int arr[], int n,int  key){
    for(int i=0; i<n;  i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,5,1,2};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Give me number which want toyou find number";
    cin>>key;
    int index = linearSearch(arr,n,key);

    if (index != -1) {
        cout << "Element " << 5 << " found at index " << index << " (first to last)" << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
