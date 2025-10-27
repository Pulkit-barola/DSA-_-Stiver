#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(2, 100);  // v = [100, 100]
    
    // Insert 10 and 30 at the beginning
    v.insert(v.begin(), {10, 30});  // Now v = [10, 30, 100, 100]
    v.insert(v.begin(),2,16);

    vector<int>copy{10,30};  // if you write parentises bracket treats as occurance then data
    v.insert(v.begin(),copy.begin(),copy.end());
    cout<<v.size()<<endl;
    for (int x : v)
        cout << x << " ";
    return 0;
    cout<<v.size();

}
