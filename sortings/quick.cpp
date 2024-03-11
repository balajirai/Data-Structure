// Quick Sort : Best Case: Ω (N log (N)) |  Average Case: θ ( N log (N)) | Worst Case: O(N^2)
// Use case : make a move the element to the correct postiosion such that left half is less than the pivot element and right is greater than the pivot element
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int start, int end){
    int pivot = arr[start];
    int count = 0;
    for(int i=start+1; i<=end; i++){
        if(arr[i]<=pivot) count++;
    }

    // place pivot at right position
    int pivotIndex = start+count;
    swap(arr[pivotIndex], arr[start]);

    // taking care of left and right part 
    int i=start, j=end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end){ 
    // base case
    if(start >= end) return;

    // partitioning or pivot index
    int p = partition(arr, start, end);

    // sort left half
    quickSort(arr, start, p-1);

    // sort right half
    quickSort(arr, p+1, end);
}

int main(){
    int arr[] = {98,77,56,7,8,93,44,32,2,345,6,17,65,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = n-1;
    quickSort(arr, start, end);
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}