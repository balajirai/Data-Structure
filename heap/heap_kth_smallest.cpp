// finding kth smallest element of a given array
// Max Heap

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int>&arr, int k) {
    priority_queue<int>maxHeap;
    
    // step 1 : push first k elements to max Heap
    for(int i=0; i<k; i++){
        maxHeap.push(arr[i]);
    }
    
    // step 2 : compare the remaining elements with heap's top
    for(int i=k; i<arr.size(); i++){
        if(arr[i] < maxHeap.top()){
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    
    // step 3 : return top of max heap
    return maxHeap.top();
}

int main(){

    // inputs
    int k = 4;
    vector<int>arr = {7, 10, 4, 20, 15};
    
    int ans = kthSmallest(arr, k);
    cout<<k<<"th Largest element is : "<< ans <<endl;

    return 0;
}