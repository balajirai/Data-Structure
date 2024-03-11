// finding the number which occurance in an array is odd

#include <bits/stdc++.h>
using namespace std;

int getOddOccurrence(int arr[], int n) {
    // code here
    int x = 0;
    for(int i=0; i<n; i++){
        x ^= arr[i];
    }
    return x;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<getOddOccurrence(arr, n)<<endl;
return 0;
}