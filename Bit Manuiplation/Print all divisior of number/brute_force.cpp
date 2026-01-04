#include<bits/stdc++.h>
using namespace std;

vector<int>alldivisior(int n){
    vector<int>ans;

    for(int i= 1; i<=n; i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int>res=alldivisior(n);

    for(int x: res)
        cout<<x<<" ";

    return 0;
}