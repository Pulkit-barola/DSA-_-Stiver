#include<bits/stdc++.h>
using namespace std;

long long power(int base , int expotional){
    long long result = 1 ;
    for(int i=0; i<expotional; i++ ){
        result = result * base;
    }
    return result;
}

int nth_power_root(int x , int n){
    if(x<0 && x%2==0){
        cout<<"Even root of negative not poosible "<<endl;
        return -1;
    }

    int r = 0;
    while(power(r,n)<=x){                     // here r is base and n is expotional
        r++;
    }
    return r-1;
}

int main() {
    int x, n;
    cout << "Enter number (x): ";
    cin >> x;
    cout << "Enter root (n): ";
    cin >> n;

    int result = nth_power_root(x, n);
    if (result != -1) {
        cout << n << "-th root of " << x << " is: " << result << endl;
    }

    return 0;
}
