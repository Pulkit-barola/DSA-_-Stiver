#include<bits/stdc++.h>
using namespace std;

vector<int>Subarray(vector<int>nums,int target){
    map<long long , int>presum;   // here long long is key value datatype while int is index data type
    long long sum = 0; 
    int maxlen = 0;

    for(int i = 0; i<nums.size(); i++){
        sum +=  nums[i];

        if(sum == target){         // is sum value == target  then we find  len
                maxlen = max(maxlen , i+1);
        }

        int remaing = sum - target ;  // if sum ! = target then we check in stack find the index  then we can sum - target value now taking example :- if in stack we have like  1: 0 where 1 is sum  and 0 isindex then we have find the value 3 : 1 where 3 is value and 1 is index if any thing that sum is 6 then we know that 3 is target then we use th=is function  because 3 value is present inindex 6-3
        if(presum.find(remaing) != presum.end()){
            int len = i - presum[remaing];
            maxlen = max(maxlen , len);
        }
        presum[sum] = i; // this  indicate that if number does not comein map then store it
    }
    return {maxlen};
//     Bilkul! Chalo is chhoti si **code block** ko ekdam **simple aur clear Hinglish mein** samjhte hain — jisse **koi beginner ya pehli baar padne wala bhi easily samajh le** 👇
// ### 🔷 Code Block:
// int rem = sum - k;
// if (preSumMap.find(rem) != preSumMap.end()) {
//     int len = i - preSumMap[rem];
//     maxLen = max(maxLen, len);
// }
// ## 🔹 Hinglish Explanation (Simple Words):

// ### 🧠 **1. rem = sum - k**

// > Hum check kar rahe hain ki kya pehle aisa koi prefix sum aaya tha,
// > **jisko subtract karne se current sum `k` ban jaata ho**.

// 🔹 Example:
// Agar `sum = 9` aur `k = 3`,
// toh `rem = 6`
// ➡ Matlab: Kya 6 pehle kabhi mila tha? Agar haan, toh 6 se leke 9 tak ka difference = 3 (which is our target).

// ---

// ### 🔍 **2. preSumMap.find(rem) != preSumMap.end()**

// > **Map me rem naam ka key exist karta hai ya nahi**, ye check karne ka syntax hai.

// 🔹 `.find(rem)`:

// * Agar **rem** mila map me, toh ye uski location (iterator) return karega.
// * Agar **rem** nahi mila, toh ye `.end()` return karega.

// 🔹 So:

// ```cpp
// if(preSumMap.find(rem) != preSumMap.end())
// ```

// \=> **Agar rem map me hai**, tabhi aage ka kaam karo.
// Nahi hai, toh skip karo.

// ---

// ### 📏 **3. Length calculate karna**

// ```cpp
// int len = i - preSumMap[rem];
// ```

// ➡ Agar `rem` pehle kabhi mila tha `index = X`,
// aur ab ho `index = i`,
// toh `i - X` = subarray ka length jiska sum `k` hoga.

// ---

// ### 🔁 **4. max length update karna**

// ```cpp
// maxLen = max(maxLen, len);
// ```

// ➡ Sabse bada length store karna hai. Agar ye length purane max se bada hai, toh update kar do.

// ---

// ### 🔚 Final One-Liner Summary in Hinglish:

// > "Agar `sum - k` naam ka prefix sum pehle kabhi mila hai, toh iska matlab hai uss index ke baad se leke ab tak ka subarray ka sum `k` hoga. Uska length nikaal ke, longest length (`maxLen`) ko update kar dete hain."

// ---

// Agar aap chaho toh main is logic ka **visual example**, **infographic**, ya **animated explanation** bhi bana sakta hoon — bas bolo! 😊

}


int main(){
    vector<int>nums = {1,2,3,4,2,1,5,1,5,3,4};
    int target  = 3; 
    vector<int>result =Subarray(nums,target);
    cout<<"\t"<<"Longest subarray with k"<<endl;
    cout<<"\t"<<"\t";
    for(auto it :result){
        cout<<it;
    }
}