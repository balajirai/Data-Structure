#include <bits/stdc++.h>
using namespace std;

int e;

int exp(int n){
    // base case
    if(n==0) return 1;

    // for odd exponent
    if(n&1) return e*exp(n/2)*exp(n/2);
    else return exp(n/2)*exp(n/2);
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>e;
    cout<<"Enter Power  : ";
    cin>>n;

    cout<<"Answer is    : "<<exp(n)<<endl;
    return 0;
}