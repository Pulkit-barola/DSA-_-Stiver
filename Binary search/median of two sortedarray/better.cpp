#include<bits/stdc++.h>
using namespace std;

    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
       int n1 = a.size();
    int n2 = b.size();

    int i = 0, j = 0;
    int n = n1 + n2;
    int ind2 = n / 2;
    int ind1 = ind2 - 1;

    int cnt = 0;
    int ind1el = -1, ind2el = -1;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (cnt == ind1) ind1el = a[i];
            if (cnt == ind2) ind2el = a[i];
            cnt++;
            i++;
        } else {
            if (cnt == ind1) ind1el = b[j];
            if (cnt == ind2) ind2el = b[j];
            cnt++;
            j++;
        }
    }

    while (i < n1) {
        if (cnt == ind1) ind1el = a[i];
        if (cnt == ind2) ind2el = a[i];
        cnt++;
        i++;
    }

    while (j < n2) {
        if (cnt == ind1) ind1el = b[j];
        if (cnt == ind2) ind2el = b[j];
        cnt++;
        j++;
    }

    if (n % 2 == 0) {
        return (ind1el + ind2el) / 2.0;
    } else {
        return ind2el;
    }
}
int main(){
     vector<int> a = {1, 3, 8};
    vector<int> b = {7, 9, 10, 11};

    cout << "Median is: " << findMedianSortedArrays(a, b) << endl;
    return 0;
}