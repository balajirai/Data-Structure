#include <bits/stdc++.h>
using namespace std;

void SievePrime(int n){

    int prime[100] = {0};
    for(int i = 2; i<=n; i++){
        if(prime[i] == 0){                        // unmarked, then will mark the multiple  of that number (not that number itself)
            for (int j = i*i; j <= n; j+=i){       // start the marking from sqr of that number and then multiple of the number
                prime[j] = 1;                     // marking is done for composite numbers
            }
            
        }
    }

    // printing the primes
    for(int i = 2; i<=n; i++){
        if(prime[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    SievePrime(n);
return 0;
}