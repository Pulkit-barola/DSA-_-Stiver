#include<bits/stdc++.h>
using namespace std;

string int_to_roman(int num){
    vector<int>val = {
        1000,900,500,400,
        100,90,50,40,
        10,9,5,4,
        1
    };

    vector<string>sys = {
        "M","CM","D","CD",
        "C","XC","L","XL",
        "X","IX","V","IV",
        "I",
    };

    string roman = "";
    for(int i=0; i<val.size(); i++){
        while(num>=val[i]){
            roman += sys[i];
            num -= val[i];
        }
    }
    return roman;
}

int main(){
    cout<<"Enter any number that you want of romain no"<<endl;
    int number;
    cin>>number;
    string result = int_to_roman(number);
    cout<<result;
}