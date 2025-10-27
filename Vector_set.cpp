#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(3);
    s.insert(5);
    s.insert(5); //this is igonerd because set say they have unique value
    s.insert(7);
    s.insert(9);
    s.insert(10);
    s.size();
    cout<<s.size()<<endl;
    auto it = s.find(7);
    s.erase(5);
    for(int x:s){
        cout<<x<<" ";
    }

    auto it1 = s.find(9);
    auto it2 = s.find(3);
    s.erase(it2,it1);
    cout<<endl;
    for(int x:s){
        
        cout<<x<<" ";
    }

}