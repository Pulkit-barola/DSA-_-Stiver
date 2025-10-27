// #include<bits/stdc++.h>
// using namespace std;



// void recurrsion_loop(int x, int count = 1){
//     if(count > x){
//         return;
//     }
//     else{
//         cout<<count<<endl;
        
//         recurrsion_loop(x,count+1);
//     }
// }

// int main(){
//     int x;
//     cin>>x;
//     recurrsion_loop(x);
// }


// in ve tor
#include <iostream>
#include <vector>

using namespace std;

vector<int> printNos(int x) {
    if (x == 0) return {}; // Base case: return an empty vector when x is 0

    vector<int> result = printNos(x - 1); // Recursively get numbers from 1 to (x-1)
    result.push_back(x); // Add the current number to the vector
    return result;
}

int main() {
    int x = 5;
    vector<int> nums = printNos(x);

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
