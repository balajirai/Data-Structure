#include <bits/stdc++.h>
using namespace std;
int main(){

    // way 1 -> O(n)
    string s1 = "BALAJI";
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<"Lower Case : "<<s1<<endl;

    // way 2 -> O(n)
    string s2 = "RAI";
    for(char &c:s2){
        c = tolower(c);
    }
    cout<<"Lower Case : "<<s2<<endl;

    return 0;
}