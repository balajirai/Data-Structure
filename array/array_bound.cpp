// finding the index of first and last occurance of an element in an array

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,4,4,4,5,6,7};
    int n = 10;
    int x = 4;
    
    int *ptr1 = lower_bound(arr,arr+n,x);
    int low_index = ptr1-arr;

    int *ptr2 = upper_bound(arr,arr+n,x);
    int high_index = ptr2-arr-1;

    cout<<"First Occurance index : "<<low_index<<endl;
    cout<<"Last  Occurance index : "<<high_index<<endl;

return 0;
}