#include<bits/stdc++.h>
using namespace std;

int Duplicessorted(int arr[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}

int main() {
    int arr[] = {1,1,2,3,3,4,5,6,6,7};
    int n = sizeof(arr)/sizeof(int);

    int result = Duplicessorted(arr,n);

    if(result){
        cout<<"\t Unique Element \t"<<endl;;
        for(int i=0; i<result; i++){
            cout<<" "<<arr[i];
        }

    }else{
        cout<<"Array is in unsorted"<<endl;
    }
}