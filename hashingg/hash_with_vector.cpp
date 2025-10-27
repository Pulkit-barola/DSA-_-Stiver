#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // for unlimated range of precompution 
    // use unordered map

    unordered_map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<hash[number];
    }
}