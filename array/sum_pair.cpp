// if pair of target sum found return 1 else return 0

#include <iostream>
using namespace std;

int hasPairWithTarget(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    
    while(start<end){
        int sum = arr[start] + arr[end];
        if(sum == target) return 1;
        else if (sum < target) start++;
        else end--;
    }
    return 0;
}

int main(){
    int n,target;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter target sum : ";
    cin>>target;
    
    cout<<hasPairWithTarget(arr,n,target);
return 0;
}