#include<bits/stdc++.h>
using namespace std;

vector<int>divisor(int n){
    vector<int>ans;
    int sqrtN= sqrt(n);

    for(int i=1; i<=sqrtN; i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!= (n/i)){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int>res=divisor(n);

    for(int x: res)
        cout<<x<<" ";

    return 0;
}