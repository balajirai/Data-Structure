// finding square root of a number using binary search

#include <bits/stdc++.h>
using namespace std;

double eps = 1e-7;

int main(){
    double x;
    cin>>x;

    double lo = 1, hi = x, mid;
    while(hi - lo > eps){
        mid = (lo + hi)/2;
        if(mid*mid < x){
            lo = mid;
        }
        else hi = mid;
    }

    // lo and hi will return same
    // cout<<lo<<endl;
    cout<<setprecision(7)<<"sqrt : "<<hi<<endl;   
return 0;
}

// time compexity : log (n*(10^d))   ( d =  precision up to d places)