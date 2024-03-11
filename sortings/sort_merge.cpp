// The Merge Sort algorithm is a sorting algorithm that is considered an example of the divide and conquer strategy. 
// So, in this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner

#include <iostream>
using namespace std;

const int N = 1e5+10;
int arr[N];

void merge(int l, int r, int mid){
    int lsz = (mid-l)+1;        //size of left array
    int rsz = (r-(mid+1))+1;    //size of right array (this can also be written as r-mid)
    int L[lsz+1];
    int R[rsz+1];

    //filling left array from original array
    for (int i = 0; i < lsz; i++){
        L[i] = arr[l+i];
    }
    // cout<<"vql of l r "<<l<<" "<<r<<endl;

    // filling right array from original array
    for (int i = 0; i < rsz; i++){
        R[i] = arr[mid+1+i];
    }

    L[lsz] = R[rsz] = INT_MAX;      // this is to get rid of the condition when any of the two array got empty during the merging

    // merging the sorted two arrays
    int li=0;       // first index of left array
    int ri=0;       // first indes of right array

    for (int i = l; i <= r; i++){
        if(L[li] <= R[ri]){
            arr[i] = L[li];
            li++;
        }
        else{
            arr[i] = R[ri];
            ri++;
        }
    }
    
}

void mergeSort(int l, int r){
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(l,mid);       // sorting the left array
    mergeSort(mid+1,r);     // sorting the right array

    merge(l,r,mid);         // merging the sorted array

}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    mergeSort(0,n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

return 0;
}