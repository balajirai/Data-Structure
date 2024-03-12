#include <bits/stdc++.h>
using namespace std;

// count substring inside the given/original string
int countSubstring(string &original, string &substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = original.find(substring, pos)) != string::npos) {
        count++;
        pos++;
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

/*

input :

original : bobob
substring: bob

correct output : 2

*/