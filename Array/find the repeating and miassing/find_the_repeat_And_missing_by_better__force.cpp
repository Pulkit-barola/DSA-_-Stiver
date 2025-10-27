#include<bits/stdc++.h>
using namespace std;

vector<int>FindTheRepeatingandmissinng(vector<int>&nums){
    int n = nums.size();
    int hash[n+1] = {0};

    for(int i = 0; i<n; i++){
        hash[nums[i]]++;
    }
    int Repeating = -1;
    int Missing = -1;

    for(int i = 1; i<=n; i++){
        if(hash[i]==2){
            Repeating = i;
        }

        if(hash[i]==0){
            Missing = i;
        }

        if(Repeating == -1 && Missing == -1){
            break;
        }
    }
    return {Repeating,Missing};
}

int main(){
    vector<int>array = {2,3,4,1,1};
    vector<int> ans = FindTheRepeatingandmissinng(array);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}