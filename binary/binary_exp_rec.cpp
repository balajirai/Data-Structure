// binary exponentiation for finding power of a number O(log n)
// pow(a,b) -- returns double which is less precise
// recursive method

#include <bits/stdc++.h>
using namespace std;

long long BinExpRec(int a, int b){
    if(b==0) return 1;          // base condition
    long long res = BinExpRec(a, b/2);
    res *= res;

    if(b&1) return a*res;       // for odd
    else return res;            // for even
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<BinExpRec(a,b);

return 0;
}