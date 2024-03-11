#include <bits/stdc++.h>
using namespace std;

// n-post and k-colours // D(N,K) = D(N-2)*(K-1) + D(N-1)*(K-1)
// possible ways to paint posts so that two adjacent posts are not of same colour

int solve(int n, int k){
    // base case
    if(n==1) return k;
    if(n==2) return k+k*(k-1);

    int same = solve(n-2, k)*(k-1);
    int diff = solve(n-1, k)*(k-1);

    return same+diff;
}

int main(){
    int n,k;  // n-posts and k-colours
    cout<<"Enter Posts and Colors : ";
    cin>>n>>k;
    cout<<"Possible ways to paint : "<<solve(n,k)<<endl;
    return 0;
}