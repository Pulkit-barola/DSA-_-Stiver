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

   while(low<=high){
    int mid = low +(high-low)/2;
    int noofstud = Bookalocated(book,mid);
 if (noofstud <= mthstudent) { // possible allocation
            high = mid - 1; // try smaller
        } else {
            low = mid + 1;  // need more pages
        }
   }


   return low;
}

int main() {
    vector<int> books = {25,46,28,49,24};
    int m = 4; // students
    cout << "Minimum pages: " << findpages(books, m) << endl;
    return 0;
}


