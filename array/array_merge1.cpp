// merging two sorted array without using extra space
// time complexity O(m+n(log(m+n)))
// space complexity O(1)

#include <bits/stdc++.h>
using namespace std;

// Function to merge two arrays
void merge(int arr1[], int arr2[], int n, int m){
    int i = 0, j = 0, k = n - 1;

    // Until i less than equal to k  or j is less than m
    while (i <= k && j < m){
        if (arr1[i] < arr2[j])  i++;
        else  swap(arr2[j++], arr1[k--]);
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

// both codes are correct
void merge1(int arr1[], int arr2[], int n, int m){
    int i = n-1, j = 0;

    while (i >= 0 && j < m){
        if (arr1[i] > arr2[j]) swap(arr2[j++], arr1[i--]);
        else  i--;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}


int main(){
    int ar1[] = {1, 5, 9, 10, 15, 20};
    int ar2[] = {2, 3, 8, 13};
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge1(ar1, ar2, m, n);

    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";

    return 0;
}
