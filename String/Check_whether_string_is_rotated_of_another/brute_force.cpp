#include<bits/stdc++.h>
using namespace std; 

bool is_rotated_String(string s, string goal){
    if(s.length() != goal.length()){
        return false;
    }

    int n = goal.size(); 
    string rotated = goal;

    for(int i = 0; i<n; i++){
        rotated = rotated.substr(1) + rotated[0];

        if(rotated == s){
            return true;
        }
    }
    return false;
}

int main() {
    string s = "abcde";
    string goal = "acdeb";

    bool result = is_rotated_String(s,goal);
    if(result){
        cout<<goal<<" "<<"Is rotation of "<<" "<<s<<endl;
    }else{
        cout<<goal<<" "<<"Is a Not Rotation of"<<" " <<s<<endl;
    }
}