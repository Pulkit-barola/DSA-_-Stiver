#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    //ITERATE IN THE MAP
    int max_element=INT_MIN;
    int min_element=INT_MAX;

        for(auto it:mpp)
        {   
            max_element=max(max_element,it.second);
            min_element=min(min_element,it.second);
        }
            cout<<max_element<<" "<<min_element;
    
    
}