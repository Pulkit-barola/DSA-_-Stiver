#include<bits/stdc++.h>
using namespace std;

int FindmissingNumber(int arr[], int n){
    // create a hash array with initalize hash array is 0 to n+1
    int hash_array[n+1] = {0};

    // step 2 mark numper in present array
    for(int i = 0; i< n-1; i++){
        hash_array[arr[i]]=1;
    }

    // step 3  find the missing number of array
    for (int i=1; i<=n; i++){ // used for 0 to n
        if(hash_array[i]==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);
    int n = size+1; 

    int result = FindmissingNumber(arr,n);

    cout<<"missing number is :- "<<result<<endl;
}