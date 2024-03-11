// binary exponentiation for finding power of a number O(log n)
// pow(a,b) -- returns double which is less precise

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int BinExpRec(int a, int b){
    if(b==0) return 1;
    long long res = BinExpRec(a, b/2);
    res *= res;

    if(b&1) return (a* (res % M)) % M;       // for odd
    else return res % M;                     // for even
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<BinExpRec(a,b);

return 0;
}