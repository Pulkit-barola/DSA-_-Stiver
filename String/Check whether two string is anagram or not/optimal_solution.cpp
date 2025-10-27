#include<bits/stdc++.h>
using namespace std; 

bool anagram (string s, string t){
    if(s.size() != t.size()){
        return false;
    }

    vector<int>count(26,0);

    for(int i = 0; i<s.size(); i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }

    for(int i= 0; i<26; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}




int main(){
    string s = "Listen";
    string t = "siLent";

    bool result = anagram(s,t);
    cout<<boolalpha<<result;
} // 1 is true and 0 is false