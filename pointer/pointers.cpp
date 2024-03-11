#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    cout<<"num: "<<num<<endl;

    // address of num
    cout<<"Address: "<<&num<<endl;

    int *ptr = &num;

    cout<<"ptr  : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;

    cout<<"size of integer : "<<sizeof(num)<<endl;
    cout<<"size of pointer : "<<sizeof(ptr)<<endl;
    return 0;
}