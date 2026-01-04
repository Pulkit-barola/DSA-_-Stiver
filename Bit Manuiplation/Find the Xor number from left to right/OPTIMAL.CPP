#include<bits/stdc++.h>
using namespace std;


int xorUpto(int n) {
    if (n % 4 == 4) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;

    return 0;
}

int XORnumber(int L, int R) {
    return xorUpto(R) ^ xorUpto(L - 1);
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