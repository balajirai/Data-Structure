// generate all the strings of n bits assume A[0...n-1] is an array of size n

#include <iostream>
using namespace std;

int n = 10;
int s[10];

void Binary(int n){
    if (n < 1) cout << s << endl;
    else{
        s[n - 1] = 0;
        Binary(n - 1);
        s[n - 1] = 1;
        Binary(n - 1);
    }
}

int main(){
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    Binary(n);

    return 0;
}