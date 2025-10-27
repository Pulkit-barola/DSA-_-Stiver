#include<bits/stdc++.h>
using namespace  std;

double median(vector<int>&a, vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    vector<int>arr3;
    int i = 0;
    int j= 0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr3.push_back(a[i++]);
        }
        else{
            arr3.push_back(b[j++]);
        }
    }
    while(i<n1){
        arr3.push_back(a[i++]);
    }
    while(j<n2){
        arr3.push_back(b[j++]);
    }

    int n = n1 + n2;
    if(n%2==1){
        return arr3[n/2];
    }
    return ((double)(arr3[n/2]) + (double)(arr3[(n/2)-1]))/2;
}

int main(){
    vector<int>a  = {1,3,5,7,9};
    vector<int>b = {2,4,5};

    double result = median(a,b);
    cout<<result;
}