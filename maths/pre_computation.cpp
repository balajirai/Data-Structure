// find factorial of N
// print result modulo M (M = 10^9 + 7)
// constaints :
// 1 <= T <= 10^5
// 1 <= N <= 10^5

#include <iostream>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main(){
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++){
        fact[i] = (fact[i - 1] * i)%M;
    }
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
    return 0;
}

// old time complexity if pre-computation was not used  :   O(N*T) = O(N^2)
// new time complexity after using pre-computation      :   O(N) + O(T) = O(N)