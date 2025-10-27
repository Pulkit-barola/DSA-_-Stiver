#include<bits/stdc++.h>
using namespace std;

int canweplacecows(vector<int>&stalls, int dist , int cows){
    int n = stalls.size();
    int Lastcow = stalls[0];
    int CntCow = 1;
    for(int i = 0; i<n; i++){
        if(stalls[i]-Lastcow>=dist){
           Lastcow = stalls[i];
            CntCow++;
        }

        if(CntCow>=cows){
            return true;
        }
    }

    return false;


}

int agreessioncows(vector<int>&stalls,int cows){
    int n = stalls.size();

    sort(stalls.begin(),stalls.end());
    int range = stalls[n-1]-stalls[0];

    for(int i=1;  i<range; i++){
        if(canweplacecows(stalls , i , cows)==true){
            continue;
        }
        else{
            return i-1;
        }
    }
    return range;
}

int main() {
    vector<int> stalls = {0, 3, 4, 7, 10, 9};  // stalls positions
    int k = 4;                                // number of cows

    int ans = agreessioncows(stalls, k);      // function call

    cout << "The maximum possible minimum distance is: " << ans << endl;

    return 0;
}
