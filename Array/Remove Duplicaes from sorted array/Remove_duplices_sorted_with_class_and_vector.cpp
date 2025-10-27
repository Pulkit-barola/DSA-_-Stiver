#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
    int Remove_duplices_sorted(vector<int> &arr){
        int i = 0;
        for(int j=1; j<arr.size(); j++){
            if(arr[j]!=arr[i]){
                    arr[i+1] = arr[j];
                    i++;
            }
        }
        return (i+1);
    }
};

int main(){

    Array A1;
    vector<int> arr = {1,2,2,3,3,3,4,5,6,7,7,7,7};

    int result = A1.Remove_duplices_sorted(arr);
    if(result){
        cout<<"\t"<<"\t"<<"\t"<<"UNIQUE ELEMENT"<<endl;
        for(int i=0; i<result; i++){
            cout<<"\t"<<arr[i];
        }
    }
    else{
        cout<<"Unsorted element ";
    }
}