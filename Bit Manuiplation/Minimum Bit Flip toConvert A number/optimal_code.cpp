#include<bits/stdc++.h>
using namespace std;
int ConvertFlipGoal(int startNumber, int goalNumber){
    int ans = startNumber ^ goalNumber;
    int cnt = 0;
    while(ans>0){
        cnt+=(ans&1);
        ans = ans>>1;
    }
    return  cnt;
}
int main(){
    int startNumber,goalNumber;
    cout<<"Enter the start number ";
    cin>>startNumber;
    cout<<"Enter the Goal number";
    cin>>goalNumber;

    int ans = ConvertFlipGoal(startNumber,goalNumber);
    cout<<"The total min operation to flip number"<<ans<<endl;
}