#include <bits/stdc++.h>
using namespace std;

// longest arithmetic progression [LAP] length
int solve(int A[], int index, int diff){
    // base case (backward check)
    if(index < 0) return 0;
    
    int ans = 0;
    for(int j=index-1; j>=0; j--){
        if(A[index]-A[j] == diff){
            ans = max(ans, 1 + solve(A,j,diff));
        }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Number of Elements : ";
    cin>>n;
    cout<<"Enter Elements     : ";
    int A[n];
    for(int i=0; i<n; i++) cin>>A[i];

    if(n <= 2) return n;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            ans = max(ans, 2 + solve(A, i, A[j]-A[i]));
        }
    }
    cout<<"Length of Longest AP: "<<ans<<endl;
    return 0;
}