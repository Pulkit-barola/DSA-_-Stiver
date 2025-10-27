#include<bits/stdc++.h>
using namespace std;

int FindMax(vector<int> &pile){
    int Maxi = INT_MIN;
    for(int i = 0; i<pile.size(); i++){
        Maxi = max(Maxi , pile[i]);
    }
    return Maxi;
}


int kokoeatbanana(vector<int>piles, int h){
    int Maxpile = FindMax(piles);

    for(int k = 1; k<Maxpile; k++){
        int hour = 0;
        for(int pile : piles){
            hour += (pile + k - 1)/k;

            if(hour>h){
                break;
            }
         }
         if(hour<=h){
            return k ; 
         }
    }
    return  Maxpile;
}

int main(){
    vector<int>piles = {3,7,9,11};
    int h = 9;
    int result = kokoeatbanana(piles , h);
    cout<<result;      
}