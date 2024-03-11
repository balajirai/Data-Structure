// STL for heap -> priority queue

#include <bits/stdc++.h>
using namespace std;
int main(){

    // max heap using stl
    priority_queue<int>maxHeap;

    maxHeap.push(5);
    maxHeap.push(6);
    maxHeap.push(8);
    maxHeap.push(1);

    cout<<"Top Element : "<<maxHeap.top()<<endl;
    maxHeap.pop();
    cout<<"Top Element : "<<maxHeap.top()<<endl;
    
    return 0;
}