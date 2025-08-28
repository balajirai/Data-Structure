#include <bits/stdc++.h>
using namespace std;

int main(){

    /* 
      ////////////////// Logical Error /////////////////
       1. Create a void pointer, 
       2. Store address of an int variable in it,
       3.Typecast it to char and dereference it.
    */

    void *p;  // void pointer

    int val = 96;
    p = &val; // storing address of int variable

    cout<<"p   : "<<p<<endl;
    cout<<"*p  : "<<*((char*)p)<<endl; // typecasting void pointer to char pointer and then dereferencing it


    
    /* 
      ////////////////// Compilation Error /////////////////
       1. Create an int variable, 
       2. Store address of an int variable in a char pointer ,
       3.Try dereferencing it.
    */


    // int a = 65;

    // Will raise compilation error
    // char *q = &a; // storing address of int variable into char pointer

    // cout<<"q   : "<<q<<endl;
    // cout<<"*q  : "<<*q<<endl;

    
    return 0;
}