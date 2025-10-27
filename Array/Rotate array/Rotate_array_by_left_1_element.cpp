// the rotate the array elementa by k element in left side

#include<bits/stdc++.h>
using namespace std;

void Rotatearray(vector<int> &nums){
    int n = nums.size();
    int temp = nums[0];

    for(int i=1; i<n; i++){
        nums[i-1] = nums[i];

    }

    nums[n-1] = temp;

}

int main(){
    vector<int> nums = {1,2,3,4,5,2,3,4};

    Rotatearray(nums);
    cout<<"\t"<<"Rotate by left side"<<endl;
    cout<<"\t";
    for(int i=0; i<nums.size(); i++){
    
        cout<<" " <<nums[i];
    }
}