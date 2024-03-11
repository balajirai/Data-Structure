// Finding GCD of two numbers using Euclid's Algorithm 
// Basically long division

#include <bits/stdc++.h>
using namespace std;

// GCD (dividend, divisor)

int gcd(int a, int b){
    // when divisor becomes/is zero
    if(b==0) return a;
    return gcd(b, a%b);
}
    
int main(){
    cout<<"GCD : "<<gcd(8,4)<<endl;
    cout<<"GCD : "<<gcd(12,18)<<endl;
return 0;
}