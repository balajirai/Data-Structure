// C++ code to generate all possible subarrays/subArrays Complexity- O(n^3)
// The total number of subarrays in an array of size N is N * (N + 1) / 2.
#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[], int n){
	for (int i=0; i <n; i++){
		for (int j=i; j<n; j++){
			for (int k=i; k<=j; k++){
				cout << arr[k] << " ";
            }
			cout << endl;
		}
	}
}

int main(){
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "All Non-empty Subarrays\n";
	subArray(arr, n);
	return 0;
}
