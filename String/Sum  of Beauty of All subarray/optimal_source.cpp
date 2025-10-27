#include<bits/stdc++.h>
using namespace std;

int beautySum(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            int freq[26] = {0};
            for(int j = i; j<n; j++){
                freq[s[j]-'a']++;
                int maxint  = 0 , minint = INT_MAX;
                for(int k = 0; k<26; k++){
                    if(freq[k]>0){
                        maxint = max(maxint , freq[k]);
                        minint = min(minint , freq[k]);
                    }
                }
                if(minint != INT_MAX) {
                    cnt += (maxint - minint);
                }
            }
        }
        return cnt;
    }

    int main(){
        string s = "aabaa";
         int result = beautySum(s);
         cout<<result<<endl;
    }