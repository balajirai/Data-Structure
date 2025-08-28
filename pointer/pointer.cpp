#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    int *ptr = &num;   // pointer variable which stores the address of num

    cout<<"num: "<< num <<endl;
    cout<<"ptr: "<< ptr <<endl;

    // address of num & pointer
    cout<<"Address of num (&num): "<< &num <<endl;
    cout<<"Adddress of pointer ptr (&ptr): "<< &ptr <<endl;

    cout<<"ptr  : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;

    cout<<"size of integer : "<<sizeof(num)<<endl;
    cout<<"size of pointer : "<<sizeof(ptr)<<endl;
    return 0;
}