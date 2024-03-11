#include <bits/stdc++.h>
using namespace std;
int main(){
    // string s = "hi" + "there";           // this will give compiler error
    string s = string("hi") + "there";      // converts C string literal into C++ string
    cout<<s<<endl;

    // Does work because of the empty C++ string at the beginning
    string okayHighQuestion = string("") + "hi" + '?';
    cout<<okayHighQuestion<<endl;

    // Adds character with ASCII value 41, ')', doesn't produce "hi?41".
    s += 41; // "hithere)"
    cout<<s<<endl;
    
    return 0;
}