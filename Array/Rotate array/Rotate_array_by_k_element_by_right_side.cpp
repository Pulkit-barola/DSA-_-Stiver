// Leetcode Question no :-189

// Rotate the element by right side

// example array is : 12345  and k is 3 ten ans 34512

#include <bits/stdc++.h>
using namespace std; 

void reverse(vector<int> &nums, int start , int end){
    while(start<end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void RotateArray(vector<int> &nums, int k){
    int n = nums.size();
    k = k%n ; // this line meaning when we rotate the `k % n` ka matlab hai sirf **zarurat ke jitne steps rotate karna**, kyunki `n` ya uske multiples baar rotate karne se array **wapis original** ban jaata hai.
    // they are reversing entire array
    reverse(nums,0,n-1);
    // they are reversing key element
    reverse(nums,0,k-1);
    // they are reversing remaining element
    reverse(nums,k,n-1);
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int m = nums.size();
    RotateArray(nums, 3);
    cout<<"\t"<<"Rotate Array by right side"<<endl;
    cout<<"\t";
    for(int i=0; i<nums.size(); i++){
            cout<<" " <<nums[i];
    }
}