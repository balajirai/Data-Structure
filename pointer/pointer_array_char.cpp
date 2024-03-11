#include <bits/stdc++.h>
using namespace std;
int main(){
    // for character array
    char ch[6] = "abcde";
    cout<<"ch     : "<< ch <<endl;
    cout<<"&ch[0] : "<< &ch[0] <<endl;

    char *p = &ch[0];
    cout<<"p      : "<< p <<endl;


    char c = 'z';
    char *ptr = &c;
    cout<<"c      : "<< c <<endl;
    cout<<"ptr    : "<< ptr <<endl;


    return 0;
}