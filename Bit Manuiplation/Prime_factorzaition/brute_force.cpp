#include<bits/stdc++.h>
using namespace std;
vector<int> primeFactorization(int n) {
    vector<int> factors;
    
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    
    if (n > 1) {
        factors.push_back(n);
    }
    
    return factors;
}

int funct(vector<int>query){
    vector<int>list;

    for(int i = 0; i<query.size(); i++){
        list = primeFactorization(query[i]);

        cout<<"Prime factors of "<<query[i]<<" are: ";
        for(int val: list)
            cout<<val<<" ";
        cout<<endl;
    }
}

int main(){
    vector<int>QUIRY= {10, 15, 28, 33, 49};
    funct(QUIRY);
    return 0;
}