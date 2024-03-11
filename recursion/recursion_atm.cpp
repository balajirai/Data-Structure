#include <bits/stdc++.h>
using namespace std;

// create all possible atm pin of 3 digits
void atmPin(int n, string output){
    // base case
    if(n == 0) cout<< output <<", ";
    else{
        for(char ch='0'; ch<='9'; ch++){
            atmPin(n-1, output+ch);
        }
    }
}

int main(){
    // enter green pin 123
    int n;
    cout<<"Enter Green PIN : ";
    cin>>n;
    if(n==123){
        cout<<"Possible Passwords are : ";
        atmPin(3,"");
    }
    else cout<<"Enter correct Green PIN "<<endl;
    return 0;
}