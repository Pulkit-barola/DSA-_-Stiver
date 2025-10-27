#include<bits/stdc++.h>
using namespace std;

vector<int>SingleNumber(vector<int> &nums){
    int XOR = 0;
    for(int n : nums){
        XOR = XOR^n;
    }

    int diffXOR = XOR & -XOR;

    int x = 0, y = 0; 
    for(int n : nums){
        if(n & diffXOR){
            x = x^n;
        }
        else{
            y = y^n;
        }
    }
    return {x,y};
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,5,5};

    vector<int>result = SingleNumber(nums);
   cout <<"\t"<< "Apperace once in array"<<endl;
    cout<<"\t"<<"\t";
    for(auto it : result){
        cout<<it<<" ";
    }
}