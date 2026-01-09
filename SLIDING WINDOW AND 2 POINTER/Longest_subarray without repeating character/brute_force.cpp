#include<bits/stdc++.h>
using namespace std;

int longestsubarray(string arr){
    int n = arr.size();
    int maxLength = 0;  
    for(int i =0; i<n; i++){
        vector<int>hashvisited(256, 0);
        for(int j = i; j<n; j++){
            if(hashvisited[arr[j]] == 1){
                break;
            } else {
                hashvisited[arr[j]] = 1;
                int len = j-i+1;
                maxLength = max(maxLength, len);
            }
        }
    }
    return maxLength;
}

int main(){
    string arr = "abcdeabsfegsg";
    cout<<longestsubarray(arr);
}