#include<bits/stdc++.h>
using namespace std;

int MissingNumberOfArray(int arr[], int n){
    for(int i=1; i<=n; i++){
        int flag = 0;
        for(int j=0; j<n-1; j++){                // here n is actual size which give array so if we find missing number we use n-1 because n-1 is actual array size 
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(int);
    int size = n+1;
    int result = MissingNumberOfArray(arr,n);
    cout << "Missing number is: " << result << endl;

    return 0;
}      


// it is time complexity is o(n*n)