#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);

    map<char, int> m;
    map<char, int>::iterator itr;

    // calculating the frequency of every key
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;

    for (itr = m.begin(); itr != m.end(); itr++)

        cout << itr->first << " - " << itr->second << endl;
}