// count substring inside the given/original string

#include <bits/stdc++.h>
using namespace std;

int countSubstring(string &original, string &substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = original.find(substring, pos)) != string::npos) {
        count++;
        pos += substring.length(); // this will fail here (original = bobob,   substring = bob, output = 1, correct ans = 2  )
    }
    return count;
}

int main(){
    string original, substring;
    cout<< "Enter original string : ";
    cin>> original;

    cout<< "Enter substring : ";
    cin>>substring;

    cout << "Count is : " << countSubstring(original, substring) << endl;

    return 0;
}