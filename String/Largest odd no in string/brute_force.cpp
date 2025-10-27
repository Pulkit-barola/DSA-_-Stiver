#include<bits/stdc++.h>
using namespace std;

string largestoddno(string s){
    int n = s.size();
    string largest = "";
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<=n; j++){
            string num = s.substr(i,j-i);
            // in worst case s.substr is create a new substring
            char lastdigit = num.back();

            //check for odd no which is largest 
            if((lastdigit - '0')%2==1)          // (lastdigit - '0') they can convert into string to int
            {
                if(largest.empty()||stoll(num)>stoll(largest)) // stoll are used to convert string to long long
                {
                    largest = num;
                }
            }

        }

    }
    return largest;
}

int main() {
    string s = "78941275643";
    string result = largestoddno(s);

    cout<<result;
}