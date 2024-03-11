#include <bits/stdc++.h>
using namespace std;

// possible ways to climb stairs to destination (sample : for 4 --> 7 ways)
// you are allowed to take one two or three steps at a time
// we can also add memoization to make it faster

int solve(int n){
    // base case
    if(n < 0) return 0;
    if(n <= 1) return 1;

    return solve(n-1) + solve(n-2) + solve(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}