#include <bits/stdc++.h>
using namespace std;

// copy char c to string s, n-times (builtin function)
int main(){
    string s; char ch; int n;

    cout << "Enter the string    : ";
    cin >> s;

    cout << "Enter the character : ";
    cin >> ch;

    cout << "Enter the frequency : ";
    cin>> n;

    // built-in string fucntion
    s += string(n, ch);

    cout << "Updated string is   : "<< s << endl;

    return 0;
}