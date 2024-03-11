#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;

    // copying to other variable
    int a = num;
    a++;
    cout<<num<<endl;

    // copying to other varible
    int *ptr = &num;
    a = *ptr;
    a++;
    cout<<num<<endl;

    // reaching the address and modifying
    int *p = &num;
    (*p)++;
    cout<<num<<endl;

    // copying a pointer
    int *q = p;
    cout<<"p, q   : "<<p<<" "<<q<<endl;
    cout<<"*p, *q : "<<*p<<" "<<*q<<endl;

    return 0;
}