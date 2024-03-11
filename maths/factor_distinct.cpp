// finding distinct prime factors

#include <bits/stdc++.h>
using namespace std;

vector<int>AllPrimeFactors(int N){
    
    set<int>s;
    vector<int>prime;
    int c=2;
    while(N>1){
        if(N%c==0){
        s.insert(c);
        N/=c;
        }
        else c++;
    }
    // since we return only vector so filling vector with set elements
    for(auto p : s){
        prime.push_back(p);
    }

    return prime;
}

int main(){
    int n;
    cin>>n;

    vector<int>distinct_prime = AllPrimeFactors(n);

    //printing the distinct prime factors
    for(auto p : distinct_prime){
        cout<<p<<" ";
    }
    cout<<endl;
return 0;
}