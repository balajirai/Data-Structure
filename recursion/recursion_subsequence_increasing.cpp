#include <bits/stdc++.h>
using namespace std;

// longest increasing subsequence [LIS]
int solve(int a[], int n, int curr, int prev){
    // base case
    if(curr==n) return 0;
    
    // include
    int include = 0;
    if(prev == -1 || a[curr] > a[prev]){
        include = 1 + solve(a, n, curr+1, curr);
    }
    int exclude = solve(a, n, curr+1, prev);
    
    return max(include, exclude);
}

int main(){
    int n;
    cout<<"Enter Array Lenght   : ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements : ";
    for(int &x:a) cin>>x;
    cout<<"Longest Subsequence Length : "<<solve(a,n,0,-1);
    return 0;
}