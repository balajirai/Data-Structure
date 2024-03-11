// merging two non-decreasing sorted array

#include <bits/stdc++.h>
using namespace std;

// function to merge two sorted array (non-decreasing array)
void merge(int A[], int m, int B[], int n){

    int a = m - 1;
    int b = n - 1;
    int i = m + n - 1; // calculate the index of the last element of the merged array

    // go from the back by A and B and compare and put to the A element which is larger
    while (a >= 0 && b >= 0){
        if (A[a] > B[b])
            A[i--] = A[a--];
        else
            A[i--] = B[b--];
    }

    // if B is longer than A just copy the rest of B to A location, otherwise no need to do anything
    while (b >= 0)
        A[i--] = B[b--];

}

int main(){
    int m,n;
    cin>>m>>n;
    int arr1[m+n] = {0};
    int arr2[n] = {0};
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }

    merge(arr1,m,arr2,n);
    for(int i=0; i<m+n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;


    return 0;
}