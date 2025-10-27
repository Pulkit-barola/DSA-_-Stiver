#include<bits/stdc++.h>
using namespace std;

vector<int>MissingNumber(vector<int>nums){
    int n = nums.size();

    int Xor1 = 0; 
    for(int i = 0; i<n+1; i++){
        Xor1 = Xor1^i;
    }

    int Xor2 = 0;
    for(int i = 0; i<n; i++){
        Xor2 = Xor2^nums[i];
    }

    int missing_Number = Xor1^Xor2;
    return{missing_Number};
}


int main(){
    vector<int>a = {1,2};

    vector<int>result = MissingNumber(a);
    cout<<"\t"<<"Missing number";
    cout<<endl;
    cout<<"\t";
    for(auto it:result){
        cout<<it;
    }
}