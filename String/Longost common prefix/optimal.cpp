#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return " ";
        
        // Sort the array
        sort(strs.begin(), strs.end());
        
        // After sorting, only compare first and last string
        string first = strs[0];
        string last = strs[strs.size() - 1];
        
        string result = "";
        int minLen = min(first.length(), last.length());
        
        for (int i = 0; i < minLen; i++) {
            if (first[i] == last[i]) {
                result += first[i];
            } else {
                return " ";
                break;  // First mismatch found
            }
        }
        
        return result;
    }

int main(){
    vector<string>s = {"Ramesh","Mohan"};
    string result = longestCommonPrefix(s);

    cout<<result;
}