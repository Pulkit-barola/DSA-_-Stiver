#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){
    if(n<2){
        cout<<"There is not any second largest "<<endl;
        return INT_MIN;
    }

    int largest = arr[0];
    int secondlargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i]>secondlargest && arr[i]<largest){
            secondlargest = arr[i];
        }
    }

    if(secondlargest ==  INT_MIN){                                                  // this code vaild whn second largest element look like 5,5,5,5,5
        cout<<"No second largest element because all are equal"<<endl;
        return INT_MIN;
    }   

    return secondlargest;

}

int main(){
    int arr[] = {5,5,5,5};
    int n = sizeof(arr)/sizeof(int);

    int result = secondlargest(arr,n);

    if(result!=INT_MIN){
        cout<<"Second largest element is : - "<<result<<endl;
    }
    return 0;
}