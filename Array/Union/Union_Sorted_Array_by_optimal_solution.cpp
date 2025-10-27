#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > &a, vector < int > &b) {
   int n1 = a.size();
   int n2 = b.size();

   int i = 0;
   int j = 0;
   
   vector<int> Unionarr;
   while(i<n1 && j<n2){
       if(a[i]<=b[j]){
           if(Unionarr.size()==0 || Unionarr.back()!=a[i]){
               Unionarr.push_back(a[i]);
           }
           i++;
       }
       else{
           if(Unionarr.size()==0 || Unionarr.back()!=b[j]){
               Unionarr.push_back(b[j]);
           }
           j++;
       }
   }
   while(j<n2)  // when 1 get exhausted
   {
       if(Unionarr.size()==0 || Unionarr.back()!=b[j]){
               Unionarr.push_back(b[j]);
           }
           j++;
   }
   while(i<n1) // when 2 get exhausted
   {
       if(Unionarr.size()==0 || Unionarr.back()!=a[i]){
               Unionarr.push_back(a[i]);
           }
           i++;
   }
    return Unionarr;
}

int main(){
    vector<int> a = {1,1,2,2,3,4,5,6,7};
    vector<int> b = {2,3,4,5,6,7,8};

    vector<int> result = sortedArray(a,b);

    for  (auto it : result){
        cout<<" "<<it;
    }
}