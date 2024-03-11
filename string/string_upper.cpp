#include <bits/stdc++.h>
using namespace std;
int main(){

    // way 1 -> O(n)
    string s1 = "balaji";
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<"Upper Case : "<<s1<<endl;

    // way 2 -> O(n)
    string s2 = "rai";
    for(char &c:s2){
        c = toupper(c);
    }
    cout<<"Upper Case : "<<s2<<endl;

    return 0;
}