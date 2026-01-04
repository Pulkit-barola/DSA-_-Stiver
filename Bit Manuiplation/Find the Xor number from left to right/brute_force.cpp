#include<bits/stdc++.h>
using namespace std;

int XORnumber(int L, int R){
    int XOR = 0;
    if (L > R) swap(L, R);
    for(int i = L; i<=R; i++){
        XOR ^= i;
    }

    return  XOR;
}

int main() {
    int L,R;
    cout<<"Give the L number"<<endl;
    cin>>L;
    cout<<"Give the R number"<<endl;
    cin>>R;

    int ans = XORnumber(L,R);
    cout<<"The XOOR number in the array"<<" "<<ans;
}