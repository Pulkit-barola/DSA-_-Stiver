#include<bits/stdc++.h>
using namespace std;    

vector<int>powerExptional(int n, int x){
    vector<int >ans;
    int result = 1;

    for(int i=1; i<=x; i++){
        result = result * n;
        ans.push_back(result);
    }
    return ans;
}

int main(){
    int n, x;
    cin>>n>>x;

    vector<int>res= powerExptional(n, x);
    
    for(int val: res)
        cout<<val<<" ";

        cout<<res.back()<<endl;
        
    return 0;
}