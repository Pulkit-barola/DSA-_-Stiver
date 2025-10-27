#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //pre compution
    int hash[52] = {0};
    for(int i=0; i<s.size(); i++){
        if(islower(s[i])){
            hash[s[i]-'a']++;
        }else if(isupper(s[i])){
            hash[s[i]-'A'+26]++;
        }
    }
        int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        if(islower(c)){
            cout << hash[c - 'a'] << endl;
        } else if(isupper(c)){
            cout << hash[c - 'A' + 26] << endl;
        } else {
            cout << "Invalid character!" << endl;
        }
    }

    return 0;
}