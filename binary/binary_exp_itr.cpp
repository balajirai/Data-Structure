// binary exponentiation for finding power of a number O(log n)
// pow(a,b) -- returns double which is less precise
// iterative method

#include <bits/stdc++.h>
using namespace std;

long long BinExpRec(int a, int b){
    long long ans = 1;
    while (b){
        if(b&1){        // unit digit set or not
        ans = ans*a;
        }
        a = (a*a);
        b>>=1;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<BinExpRec(a,b);

return 0;
}