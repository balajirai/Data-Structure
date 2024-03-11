// finding the total number of bits(digits) of a number in binary representation

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
    cout<<"Enter the Number : ";
    cin>>n;

    // this is just to convert into binary
    cout<<"Binary of "<<n<<" is : ";
    toBinary(n);

    int bt_ct = (int)log2(n) + 1;
    cout<<"Total binary bits are : "<<bt_ct<<endl;
return 0;
}