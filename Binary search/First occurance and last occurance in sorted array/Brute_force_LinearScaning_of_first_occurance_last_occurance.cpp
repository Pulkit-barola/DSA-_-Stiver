#include<bits/stdc++.h>
using namespace std;

pair<int , int>FirstOccurance(vector<int>&nums,int x){
    int n = nums.size();
    int First = -1, Last = -1;
    for(int i=0; i<n; i++){
        if(nums[i]==x){
            if(First == -1){
                First = i;
            }
            Last = i;
        }
    }
    return {First , Last};
}

int main() {
    vector<int>nums = {4,4,4,5,5,9,9,9,9,9,10,10,10,11,15,15,15,45,56};
     int x;
    cout<<"\t"<<" Enter the Target Value"<<endl;
    cout<<"\t"<<"\t";
    cin>>x;
    pair<int , int> result = FirstOccurance(nums , x);
    if(result.first == -1){
        cout<<"Element Not find";
    }
    else{
    cout<<"Element found!!" <<"\n"<<" "<< "The first occurance is "<<result.first <<"\n"<<" " <<"The lat occurance is "<<result.second<<endl;
    }
}