// Merge sort using recursion O(N*log(N))
// Most suitable for large data sets
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = (start+end)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = start;
    for(int i=0; i<len1; i++) first[i] = arr[mainArrayIndex++];
    for(int i=0; i<len2; i++) second[i] = arr[mainArrayIndex++];

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]) arr[mainArrayIndex++] = first[index1++];
        else arr[mainArrayIndex++] = second[index2++];
    }
    // remaining part
    while(index1 < len1) arr[mainArrayIndex++] = first[index1++];
    while(index2 < len2) arr[mainArrayIndex++] = second[index2++];

    delete[]first;
    delete[]second;
}

void mergeSort(int *arr, int start, int end){ 
    // base case
    if(start >= end) return;

    int mid = (start+end)/2;

    // sort left half
    mergeSort(arr, start, mid);

    // sort right half
    mergeSort(arr, mid+1, end);

    // merge the sorted array
    merge(arr, start, end);
}

int main(){
    int arr[] = {98,77,56,7,8,93,44,32,2,345,6,17,65,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = n-1;
    mergeSort(arr, start, end);
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}