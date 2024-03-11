// fibonacci series using recursion

#include <bits/stdc++.h>
using namespace std;

long long fib(long long n){
    if(n<2) return n;
    else return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Nth term of Fibonacci : "<<fib(n)<<endl;
return 0;
}