// binary multiplication for multiplying two number of order 10^18 using binary and addition technique O(log n)
// M modulo is also of order of 10^18
// iterative method

#include <bits/stdc++.h>
using namespace std;
const long long M = 1e18;

long long BinMul(long long a, long long b){
    long long ans = 0;
    while (b>0){
        if(b&1){        // unit digit set or not
            ans = (ans+a) % M;
        }
        a = (a  + a) % M;
        b>>=1;
    }
    return ans;
}

int main(){
    long long a,b;
    cin>>a>>b;

    cout<<BinMul(a,b);

return 0;
}