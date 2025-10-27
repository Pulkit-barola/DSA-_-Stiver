#include<bits/stdc++.h>
using namespace std;

vector<int> sqrt(int n){

    vector<int>ans;
    for(int i = 0; i< n; i++){
        if(i*i <= n){
            ans.push_back(i);
        }
        else{
            break;
        }

    }
    return ans;
}

int main() {
    int n ;
    cout<<"\t"<<"Enter the Number that you Want Square "<<endl;cout<<"\t";
    cin>>n;

    vector<int> result = sqrt(n);
     cout << "All possible sqrt candidates up to " << n << " are: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    cout << "The floor sqrt of " << n << " is: " << result.back() << endl;

    return 0;
}