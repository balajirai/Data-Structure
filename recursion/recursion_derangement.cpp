#include <bits/stdc++.h>
using namespace std;

// recursive solution for deranging n thing on n places (none should be at correct place)
// D(N) = (N-1)*(D(N-1) + D(N-2))
int solve(int n){
    // base case
    if(n==1) return 0;
    if(n==2) return 1;

    int ans = (n-1)*(solve(n-1) + solve(n-2));
    return ans;
}

int main(){
    int n;
    cout<<"Number of items : ";
    cin>>n;
    cout<<"Derangements    : "<<solve(n)<<endl;
    return 0;
}