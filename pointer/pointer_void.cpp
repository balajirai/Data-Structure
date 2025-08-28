#include <bits/stdc++.h>
using namespace std;

int main(){
    
    void *p;  // void pointer
    // cout<<"*p  : "<<*p<<endl; // error: dereferencing 'void *' pointer
    
    int val = 5;
    p = &val; // storing address of int variable

    cout<<"p   : "<<p<<endl;
    cout<<"*p  : "<<*((int*)p)<<endl; // typecasting void pointer to int pointer and then dereferencing it
    
    return 0;
}