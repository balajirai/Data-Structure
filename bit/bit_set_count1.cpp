#include <bits/stdc++.h>
using namespace std;

void toBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // this is just to convert into binary
    cout<<"Binary of "<<n<<" is : ";
    toBinary(n);

    // bit count is the count of set bit 
    cout<<"SET BIT count is : ";
    int ct = 0;
    for(int i = 31; i>=0; i--){
        if((n & (1<<i)) != 0){
            ct++;
        }
    }
    cout<<ct<<endl;

    // inbuilt function for integers
    cout<<"Integer set bit count using built in function : "<<__builtin_popcount(n)<<endl;

    // inbuilt function for integers
    cout<<"Long long set bit count using built in function : "<<__builtin_popcountll(n)<<endl;

return 0;
}