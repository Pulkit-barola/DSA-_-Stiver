// it is better approch


#include<bits/stdc++.h>
using namespace std;

vector<int>AppearnceOnce(vector<int> &nums){
    unordered_map<int,int>Count;             // here i use unordered map because they are in formof key and value and we know that key hAVe a unique and unsorted form they have property of unordered map
    vector<int>result;

    for(int Number : nums){
        Count[Number]++;            // i use this loop for using counting of number how many values are present in one key 
    }


    // finding the single key value 
    for(auto it: Count){
        if(it.second == 1){
            result.push_back(it.first);
        }
    }
    return result;
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,5,5,6,6,7,8,8};
    vector<int>result= AppearnceOnce(nums);

    cout <<"\t"<< "Apperace once in array"<<endl;
    cout<<"\t"<<"\t";
    for(auto it : result){
        cout<<it<<" ";
    }
}  



