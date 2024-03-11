// Binary search using recursion
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int start, int end, int target){
    if(start > end) return false;
    int mid = (start+end)/2;
    if(arr[mid]==target) return true;
    else if(arr[mid] < target) return binarySearch(arr, mid+1, end, target);
    else return binarySearch(arr, start, mid-1, target); 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    cout<<"Target "<<target <<" is : ";
    binarySearch(arr, 0, n-1, target) ? cout<<"FOUND" : cout<<"NOT FOUND";
return 0;
}