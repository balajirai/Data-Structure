// bubble sort  O(N^2) recursive
// Use case : In ith round, the ith largest element reached its correct(right) position
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n){ 

    // base case  
    if(n==0 || n==1) return;

    // first case (keep the largest element at the end)
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }
    bubbleSort(arr, n-1);
}

int main(){
    vector<int>arr = {98,77,56,7,8,93,44,32,2,345,6,17,65,4,3};
    int n = arr.size();
    bubbleSort(arr, n);
    cout<<"Sorted array is : ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}