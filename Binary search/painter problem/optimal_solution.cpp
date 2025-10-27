//this code is similar to book allocattion problem
#include<bits/stdc++.h>
using namespace std;
int findmax(vector<int>&arr){
    int n = arr.size();
    int maxi = -1;
    for(int i = 0; i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int fsum(vector<int>&arr){
    int n =  arr.size();
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}


int findpainter(vector<int>painter,int k){
    int paint = 1;
    int cntpainter = 0;
    int  n = painter.size();
    for(int i = 0; i<n; i++){
        if(painter[i]+cntpainter<=k){
            cntpainter += painter[i];
        }
        else{
            paint++;
            cntpainter = painter[i];
        }
    }
    return paint;
}

int  findpaintersolution(vector<int>&painter,int k){
    int n = painter.size();
    int low = findmax(painter);
    int high = fsum(painter);

    while(low<=high){
        int mid = low + (high - low)/2;
        int noofpaint =  findpainter(painter , mid);
        if(noofpaint >  k){
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return low;
}
int main() {
    vector<int> books = {10,20,30,40};
    int m = 2; // students
    cout << "Minimum pages: " <<  findpaintersolution(books, m) << endl;
    return 0;
}