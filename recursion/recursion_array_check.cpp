// check array is sorted or not using recursion

#include <iostream>
using namespace std;

int check(int arr[], int n){
    if(n==1) return 1;
    if(arr[n-1]<arr[n-2]) return 0;
    else return check(arr, n-1);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<(check(arr,n) ? "array is sorted" : "arrat is unsorted")<<endl;

return 0;
}