#include <bits/stdc++.h>
using namespace std;
int main(){
    int i = 3;
    int *t = &i;

    cout<<"(*t) : "<<*t<<endl;

    *t = *t + 1;    // go to the address, get the value and increament it by 1 then update it to same address
    cout<<"(*t = *t + 1) : "<<*t<<endl;

    cout<<"(t) : "<<t<<endl;

    t = t + 1;      // go to pointer and increment the stored address by 1 (if int +4 if double +8 and so on..)
    cout<<"(t = t + 1) : "<<(t)<<endl;

    return 0;
}