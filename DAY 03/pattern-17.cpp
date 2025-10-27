#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        char ch = 'A';
        int bp = (2*i+1)/2;
        for(int k=1; k<=2*i+1; k++){
            cout<<ch;
            if(k<=bp){
                ch++;
            }
            else{
                ch--;
            }
        }
        cout<<endl;
    }
    
}