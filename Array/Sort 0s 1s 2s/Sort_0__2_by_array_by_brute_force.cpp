#include<bits/stdc++.h>
using namespace std;
// we use brute force approch by merge sort
void Merge(int arr[] , int left , int mid , int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // now making  tempory array by using pointer
    int * L = new int[n1];
    int * R = new int[n2];

    // copy data from tempory array 
    // now lets take example arr[]=  {1,2,3,4,5,6} so left = 0 and right = arr.size()-1 right = 5 0+5/2 3, 2

    for(int i = 0 ; i<n1; i++){
        L[i] = arr[left+i];  
    }
    for(int j  = 0; j<n2; j++){
        R[j] = arr[mid+1+j];
    }
    // now merge the array i is start from left 0 index and j start from  right 0 index
    int i = 0 , j = 0 , k = left;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            k++;
            i++;
        }
        else{
            arr[k] = R[j];
            k++;
            j++;
        }
    }
    // copy the remaing element
    while(i<n1){
        arr[k] = L[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = R[j];
        k++;
        j++;
    }

    // let dry run L[] = {2,4,6} and R[] = {1,3}
//     | L[i] | R[j] | Chosen | arr[]        |
//     | ----- | ----- | ------ | ---------- |
//     | 2     | 1     | 1      | [1]       |
//     | 2     | 3     | 2      | [1, 2]    |
//     | 4     | 3     | 3      | [1, 2, 3] |
            // HERE 4 AND 6 ARE REMAING SO WE COPY THE ELEMENT FROM N1 TO ORIGINAL ARRAY
            // now delete tempory array
        delete[] L;
        delete[] R;
}

void Sort0s1s2s(int arr[] , int left , int right){
    if(left>=right){
        return;
    }
    int mid = left+(right-left)/2;

    Sort0s1s2s(arr,left,mid);
    Sort0s1s2s(arr,mid+1,right);
    Merge(arr,left,mid,right);

}


void printArray(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {2, 0, 1, 2, 0, 1, 0,};
    int n = sizeof(arr) / sizeof(arr[0]);

    Sort0s1s2s(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr,n);

    return 0;
}