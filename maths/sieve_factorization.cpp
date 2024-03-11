// prime factorization

#include <bits/stdc++.h>
using namespace std;

int const N = 1e6+7;
vector<int>spf(N,0);

void fun_spf(int n){
    for(int i=2; i<=n; i++){
        spf[i] = i;
    }
    for(int i=2; i<=n; i++){
        if(spf[i] ==i){
            for(int j = i*i; j<=n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}
int main(){
    int n;
    cin>>n;
    fun_spf(n);
return 0;
}