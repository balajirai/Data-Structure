#include <bits/stdc++.h>
using namespace std;

// get min square sum 
// ie, for 100 its 10*10 so ans = 1 (other answers 8*8+6*6 but not min)
int solve(int n){
    // base case
    if(n==0) return 0;
    if(n<0) return 0;
    
    int mini = n;
    for(int i=1; i*i<=n; i++){
        int res = solve(n-i*i);
        mini = min(mini, res+1);
    }
    return mini;
}
int main(){
    int n;
    cout<<"Enter Number     : ";
    cin>>n;
    cout<<"Min Square count : "<<solve(n)<<endl;
    return 0;
}