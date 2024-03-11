// Linear search in using recursion
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int target){
    if(size == 0) return false;
    if(arr[0]==target) return true;
    else{
        bool remainingPart = linearSearch(arr+1, size-1, target);
        return remainingPart;
    }
}

int main(){
    int arr[] = {1,2,6,4,3,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    cout<<"Target "<<target <<" is : ";
    linearSearch(arr, n, target) ? cout<<"FOUND" : cout<<"NOT FOUND";
return 0;
}