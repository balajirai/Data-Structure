// power function

#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n){
    if (n == 0) return 1;
    if (n < 0) return 1 / x * myPow(1 / x, -(n + 1));
    return (n % 2 == 0) ? myPow(x * x, n / 2) : x * myPow(x * x, n / 2);
}

int main(){
    int n;
    double x;
    cout<<"Enter Number : ";
    cin>>x;
    cout<<"Enter Exponent : ";
    cin>>n;
    cout<<"Result is : "<<myPow(x,n)<<endl;
    return 0;
}