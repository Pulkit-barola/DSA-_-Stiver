#include<bits/stdc++.h>
using namespace std;


void print(int n[], int size){
    for(int i=0; i<size; i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int n[], int size ){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(n[j]>n[j+1]){
                swap(n[j],n[j+1]);
            }
        }
    }
    print(n,size);
}

int main(){
    int n[] = {54,25,63,74,96,74};
    int size = sizeof(n)/sizeof(int);
    cout<<"UnSorted Array";
    print(n,size);
    cout<<"Sorted Array";
    bubblesort(n,size);
    return 0;
}