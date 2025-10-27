#include<bits/stdc++.h>
using namespace std;

bool anagram(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main(){
    string s = "Listen";
    string t = "siLent";

    bool result = anagram(s,t);
    cout<<boolalpha<<result;
} // 1 is true and 0 is false