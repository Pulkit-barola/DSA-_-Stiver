#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int>pq;
    pq.push(3);
    pq.push(5);
    pq.push(2);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;


    priority_queue<int, vector<int> , greater<int>>pq1;
    pq1.push(8);
    pq1.push(10);
    pq1.push(2);
    pq1.push(7);
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top();
}