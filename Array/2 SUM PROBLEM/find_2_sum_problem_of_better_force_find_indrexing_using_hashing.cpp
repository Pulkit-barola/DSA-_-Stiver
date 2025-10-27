#include<bits/stdc++.h>
using namespace std;
 // using unordered map become optimal approch
vector<int>Sum2Problem(vector<int> &nums , int target){
    map<int,int>mpp;
    for(int i = 0; i<nums.size();  i++){
        int num = nums[i];
        int moreneed = target - num;
        if(mpp.find(moreneed)!=mpp.end()){
                return{mpp[moreneed],i};
        }
        mpp[num]= i;
    }
    return  {-1,-1};
}


int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,15,12,45};
    int target;
    cout<<"Give me target value";
    cin>>target;
    vector<int>result = Sum2Problem(arr , target);

     cout<<"The sum of two number which gather target value :- "<<target<<endl;
     cout<<"\t"<<"\t";
    for(auto it : result){
        cout<<it<<" ";
    }
    cout<<endl;
}