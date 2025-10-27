#include<bits/stdc++.h>
using namespace std;

string SortCharcterbyFrequency(string s){
    unordered_map<char , int>mp;

    for(char c : s){
        mp[c]++;
    }

    sort(s.begin(),s.end(),[&](char a, char b){
        if(mp[a]==mp[b]){
            return a<b; // they go with normal alphabetic order
        }
        return mp[a]>mp[b];
    });
    return s;
}

int main(){
    string s = "tree";
    string result = SortCharcterbyFrequency(s);

    cout<<" "<<result;
}