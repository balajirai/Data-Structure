// check prime numbers

#include <bits/stdc++.h>
using namespace std;

// brute force O(n)
bool isPrime(int n){
    bool prm = true;
    if(n==1) return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            prm = false;
            break;
        }
    }
    return prm;
}

int main(){
    while (true){
        int n;
        cin >> n;

        cout << isPrime(n) << endl;
    }

    return 0;
}