#include<bits/stdc++.h>
using namespace std;

int Sum(vector<int>&nums){
    int sum = 0;
    int n = nums.size(); 
    for(int i = 0; i<n; i++){
        sum+=nums[i];
    }
    return sum;
}
int findmax(vector<int>&nums){
    int Maxi = INT_MIN;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        Maxi = max(Maxi , nums[i]);
    }
    return Maxi;
}

int Bookalocated(vector<int>book, int pages ){
    int n = book.size();
    int Stud = 1;
    int pagesstud = 0;
    for(int i=0; i<n; i++){

        if(pagesstud+book[i]<=pages){
            pagesstud  +=  book[i]; 
        }
        else {
            Stud++ ;
            pagesstud = book[i];
        }

    }
    return Stud;
}

int findpages(vector<int>book , int mthstudent){
    int n = book.size();
    if(mthstudent>n){
        return -1;
    }

    int low = findmax(book);
    int high = Sum(book);

    for(int pages = low; pages <= high; pages++){
        int cntstudent = Bookalocated(book,pages); 
        if (cntstudent == pages){
            return pages;
        }
    }
    return -1;
}

int main() {
    vector<int> books = {12, 34, 67, 90};
    int m = 2; // students
    cout << "Minimum pages: " << findpages(books, m) << endl;
    return 0;
}