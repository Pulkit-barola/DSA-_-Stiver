#include <bits/stdc++.h>
using namespace std;

void Sort0s1s2s(int arr[],int n){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]==0){
            cnt0++;
        }else if(arr[i]==1){
            cnt1++;
        }
        else{

            cnt2++;
        }
    }

    // sorting the array
    for(int i = 0; i<cnt0; i++){
        arr[i]=0;
    }
    for(int j = cnt0; j<cnt0+cnt1; j++){
        arr[j] = 1;
    }
    for(int k = cnt0+cnt1; k<cnt0+cnt1+cnt2; k++){
        arr[k] = 2;
    }

}

int main(){
    int arr[] = {1,2,0,1,2,1,1,0,1,1,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<"\t"<<"Given array" <<endl;
     cout<<"\t";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    Sort0s1s2s(arr,n);
    cout <<endl;
    cout<<"\t"<<"Sorted array"<<endl;
    cout<<"\t";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}