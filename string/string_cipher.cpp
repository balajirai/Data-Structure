#include <bits/stdc++.h>
using namespace std;
int main(){
    string plainText = "ATTACK AT DAWN";
    string cipherText = "";
    int key = 5; // caesar shift by five
        
    // only works for uppercase!
    for (int i=0;i<(int)plainText.length();i++) {
        char plainChar = plainText[i];
        char cipherChar;
        if (plainChar >= 'A' && plainChar <= 'Z') {
            cipherChar = plainText[i] + key;
            if (cipherChar > 'Z') {
                cipherChar -= 26; // wrap back around
            }
        } else {
            cipherChar = plainChar;
        }
        cipherText += cipherChar;
    }
    cout << "Plain text:  " << plainText << endl;
    cout << "Cipher text: " << cipherText << endl;
    return 0;
}