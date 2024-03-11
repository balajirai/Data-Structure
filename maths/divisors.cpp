// Divisors of a given number (pre-computing)

#include <bits/stdc++.h>
using namespace std;

int const N = 1e5+7;
vector<int>divisors[N];         // array of vectors (vectro i strores divisors of i)

void fun_div(){
    for(int i=2; i<N; i++){
        for(int j = i; j<N; j+=i){
            divisors[j].push_back(i);
        }
    }
}

int main(){
    int n;
    cin>>n;
    fun_div();
    for(int i=1; i<=n; i++){
        cout<<i<<" -> ";
        for(int div : divisors[i]){
            cout<<div<<" ";
        }
        cout<<endl;
    }
return 0;
}