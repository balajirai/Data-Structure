#include <bits/stdc++.h>
using namespace std;

// min trangulation value (leetcode (brute force - recursion)) 
// Recurrence relation :  D(i,j) = D(i,k) + D(k,j)    // i=0, j=n-1, k is from i+1 to j
int solve(vector<int>&v, int i, int j){
    // base case
    if(i+1 == j) return 0;

    int ans = INT_MAX;
    for(int k=i+1; k<j; k++){
        ans = min(ans, v[i]*v[j]*v[k] + solve(v, i, k) + solve(v, k, j));
    }
    return ans;
}

int main(){
    int n;
    cout<<"Number of vertices : ";
    cin>>n;
    vector<int>values(n);
    cout<<"Values of vertices : ";
    for(int i=0; i<n; i++) cin>>values[i];
    cout<<"Min Trangulation is: "<<solve(values, 0, n-1)<<endl;
    return 0;
}