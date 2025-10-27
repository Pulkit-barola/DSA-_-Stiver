#include<bits/stdc++.h>
using namespace std;

vector<int> UnionSortedARray(vector<int> &a , vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for(int i=0; i<n1; i++){
        st.insert(a[i]);
    }

    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }

    vector<int>temp;
    for(auto it :st){
        temp.push_back(it);
    }
    return temp;

}

int main(){
    vector<int>a = {1,3,4,6,6,6,8,9,74};
    vector<int>b = {2,3,4,4,5,5,6,7};

    vector<int> result = UnionSortedARray(a,b);
    cout<<"\t"<<"\t"<<"Union of array"<<endl;
    cout<<"\t";
    for(auto val :  result){
        cout<<val<<"  ";
    }
    return 0;
}