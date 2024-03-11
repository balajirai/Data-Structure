// heap sort O(n*log(n))
// 0-based indexing

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int index){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    // base case
    if (left >= n && right >= n) return;

    // comparison
    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    // updating the heap
    if(largest != index){
        swap(arr[largest], arr[index]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int> &arr){

    // heapifying the array (rearrange it into heap)
    int n = arr.size();
    for(int i=n/2-1; i>0; i--){
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);   // Move current root to end
        heapify(arr, i, 0);     // call max heapify on the reduced heap
    }
}

int main(){

    vector<int> arr = {54, 53, 55, 52, 50};
    int n = arr.size();

    cout<<"Original Array  : ";
    for(int i=0; i<n; i++) cout<< arr[i] << " ";
    cout<<endl;

    // call the Heap sort
    heapSort(arr);

    cout << "After Heap Sort : ";
    for(int i=0; i<n; i++) cout<< arr[i] << " ";
    cout<<endl;
    
    return 0;
}