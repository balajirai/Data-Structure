// swaping numbers using xor operator

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    // swap using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<"New a : "<<a<<endl;
    cout<<"New b : "<<b<<endl;
return 0;
}