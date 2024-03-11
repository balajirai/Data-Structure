#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
	void leftRotate(int arr[], int k, int n) { 
	   // Your code goes here
	   if(k>=n) k %= n;
	   int temp[n];
	   int ci = 0;      // current index
	   for(int i=k; i<n; i++){
	       temp[ci]=arr[i];
	       ci++;
	   }
	   for(int i=0; i<k; i++){
	       temp[ci] = arr[i];
	       ci++;
	   }
	   for(int i=0; i<n; i++){
	       arr[i] = temp[i];
	   }
	} 
		
};


int main() {
   	int t;
    cin >> t;
    while (t--){
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}