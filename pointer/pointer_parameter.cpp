#include <bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<"p  : "<< p <<endl;
    cout<<"*p : "<< *p <<endl;
    cout<<"&p : "<< &p <<endl;
}

void update(int *p){
    *p = *p + 1;
}

int main(){
    int value = 5;
    int *p = &value;

    print(p);

    cout<<"\nBefore update (value) : "<< value <<endl;
    update(p);
    cout<<"After  update (value) : "<< value <<endl;

    return 0;
}