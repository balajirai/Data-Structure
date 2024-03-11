#include <bits/stdc++.h>
using namespace std;
int main(){
    string mixed = "ab80c3d27";
    cout << "The digits in " << mixed << ": ";
    for (int i = 0; i < mixed.length(); i++) {
        if (isdigit(mixed[i])) {
            cout << mixed[i] << " ";
        }
    }
    cout<<endl;

    string s = "my string";
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);   // character by character
    }
    cout << "Now " << s << " is all UPPERCASE." << endl;

    return 0;
}