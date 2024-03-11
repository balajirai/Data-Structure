#include <bits/stdc++.h>
using namespace std;

// reversing an array recursively
void rev_arr(int arr[], int start, int end){
    if(start >= end) return;
    swap(arr[start], arr[end]);
    rev_arr(arr, start+1, end-1);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    rev_arr(arr,0,n-1);
	    for(int i=0; i<n; i++)
	        cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}