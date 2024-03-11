// Heapify -> Take that array convert it into heap from the given index to last index : O(n)
// we don't need to heapify leaf nodes (as leaf nodes are heap in itself (single element heap))
// In complete binary tree leaf nodes are from floor(n/2) to n-1  (0-based indexing)
// 0-based indexing is considered here

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int index){
    int smallest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    // base case
    if (left >= n && right >= n) return;

    // comparison
    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    // updating heap
    if(smallest != index){
        swap(arr[smallest], arr[index]);
        heapify(arr, n, smallest);
    }
}

int main(){

    vector<int>arr = {54, 53, 55, 52, 50};
    int n = arr.size();

    cout<<"Original Array  : ";
    for(int i=0; i<n; i++) cout<< arr[i] << " ";
    cout<<endl;

    // heapifying the complete array
    for(int i=n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }

    cout << "Min Heapified   : ";
    for(int i=0; i<n; i++) cout<< arr[i] << " ";
    cout<<endl;
    
    return 0;
}