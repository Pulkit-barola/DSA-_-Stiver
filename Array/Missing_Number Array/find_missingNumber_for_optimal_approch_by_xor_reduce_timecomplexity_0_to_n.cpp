#include<bits/stdc++.h>
using namespace std;

vector<int>Missing_number(vector<int>nums){
    int n = nums.size();

    int Xor1 = 0;
    int Xor2 = 0;

    for(int i=0; i<n; i++){
        Xor2 = Xor2^nums[i];
        Xor1 = Xor1^(i);
    }

    Xor1 = Xor1 ^ n;

    int missingnumber = Xor1^Xor2;
    return{missingnumber};

}


int main(){
    vector<int> nums = {1,2,3,4,5};

    vector<int>result = Missing_number(nums);
    cout<<"\t"<<"Missing number";
    cout<<endl;
    cout<<"\t";
    for (auto it : result){
        cout<<it;
    } 
}