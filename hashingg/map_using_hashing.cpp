#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    // precompution we used map

    map<int, int>mpp;
    for(int i=0; i<n; i++){
        mpp[array[i]]++;
    }
    //ITERATE IN THE MAP
    
    for (auto it :mpp){
        cout<<it.first<<"->"<<it.second;
    }
    //q is stand for query

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // output
        cout<<mpp[number];
    }
    return 0;
}