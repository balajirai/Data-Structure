// nth root of a number using binary

#include <bits/stdc++.h>
using namespace std;

double esp = 1e-7;

double multiply(double mid, int n){
    double ans = 1;
    for(int i=0; i<n; i++)
        ans*= mid;
    return ans;
}

int main(){
    double x;
    int n;
    cin>>x>>n;

    double lo = 1, hi = x, mid;
    while(hi - lo > esp){
        mid = (lo + hi)/2;
        if(multiply(mid,n) < x) lo = mid;
        else hi = mid;
    }

    cout<<"Nth root : "<<lo<<endl;
return 0;
}

// time compexity : p log (n*(10^d))   ( d =  precision up to d places, p = pth root, n =  number)