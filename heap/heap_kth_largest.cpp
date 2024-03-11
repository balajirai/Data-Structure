// finding kth largest element of a given array
// Min Heap

#include <bits/stdc++.h>
using namespace std;

int kthLargest(vector<int>&arr, int k) {
    priority_queue<int, vector<int>, greater<int> >minHeap;
    
    // step 1 : push first k elements to max Heap
    for(int i=0; i<k; i++){
        minHeap.push(arr[i]);
    }
    
    // step 2 : compare the remaining elements with heap's top
    for(int i=k; i<arr.size(); i++){
        if(arr[i] > minHeap.top()){
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }
    
    // step 3 : return top of max heap
    return minHeap.top();
}

int main(){
    
    // inputs
    int k = 4;
    vector<int>arr = {7, 10, 4, 20, 15};
    
    int ans = kthLargest(arr, k);
    cout<<k<<"th Largest element is : "<< ans <<endl;

    return 0;
}