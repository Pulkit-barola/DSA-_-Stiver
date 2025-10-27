
//they time complexity  is o(2n) so we need to convet into o(n)
#include<bits/stdc++.h>
using namespace std;

vector<int>MissingNumber(vector<int>&nums){
    int n = nums.size();

    int XOR1 = 0;
    for(int i=1; i<=n+1; i++){
        XOR1 = XOR1^i;
    }

    int XOR2 = 0; 
    for(int i=0; i<n; i++){
        XOR2 = XOR2^nums[i];
    }
    int missing = XOR1^XOR2;

    return{missing};

}


int main(){
    vector<int> nums = {1,2,4};

    vector<int> result = MissingNumber(nums);

    cout<<"\t"<<"Missing number";
    cout<<endl;
    cout<<"\t";
    for(auto it : result){
        cout<<it;
    }
}