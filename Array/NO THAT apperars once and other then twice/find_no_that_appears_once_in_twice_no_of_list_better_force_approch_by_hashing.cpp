#include<bits/stdc++.h>
using namespace std;

set<int>Appearnceonce(vector<int> &nums){
    unordered_map<int,int>Number;
    set<int>result;

    // count the frequency
    for(int num : nums){
        Number[num]++;
    }

    // step 2 add the number that appear only oncein the set
    for(auto it : Number){
        if(it.second == 1){
            result.insert(it.first);   // for the set if we want to add the number then we use insert while in  vector  we use push_back
        }
       
    } 
    return result;


}


int main(){
    vector<int> nums = {1,1,2,3,3,4,5,5};

    set<int>result = Appearnceonce(nums);
    cout<<"\t"<<"Appare Once in array"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<" "<<it;
    }
}