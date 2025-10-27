#include<bits/stdc++.h>
using namespace  std;

bool ispalindrome(string s){
        int i = 0, j = s.size() - 1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";
        for(int i = 0 ; i<n; i++){
            string temp = "";
            for(int j = i; j<n; j++){
                temp += s[j];
                if(ispalindrome(temp)){
                    if(temp.size()>ans.size()){
                        ans = temp;
                    }
                }
            }
        }
        return ans;
    }

    int main(){
        string s = "ababa";
        string result = longestPalindrome(s);
        cout<<"The result of longest palindrome"<<" "<<result<<endl;
    }

// the optimal code is done by  dp which we do further