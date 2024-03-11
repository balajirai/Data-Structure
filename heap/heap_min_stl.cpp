// STL for heap -> priority queue

#include <bits/stdc++.h>
using namespace std;
int main(){

    // min heap using stl
    priority_queue<int, vector<int>, greater<int> >minHeap;

    minHeap.push(5);
    minHeap.push(6);
    minHeap.push(8);
    minHeap.push(1);

    cout<<"Top Element : "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Top Element : "<<minHeap.top()<<endl;
    
    return 0;
}