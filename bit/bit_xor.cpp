#include <bits/stdc++.h>
using namespace std;

void toBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}
int main(){
    int n1,n2;
    cout<<"Enter the num1 : ";
    cin>>n1;
    cout<<"Enter the num2 : ";
    cin>>n2;

    // this is just to convert into binary
    cout<<"Binary of "<<n1<<" is : ";
    toBinary(n1);
    cout<<"Binary of "<<n2<<" is : ";
    toBinary(n2);

    // taking xor
    int xr = n1^n2;
    cout<<"XOR ("<<n1<<" ^ "<<n2<<") is : "<<xr<<endl;
    cout<<"Binary of "<<xr<<" is : ";
    toBinary(xr);

    // some properties of xor
    // a^a = 0
    // a^0 = a
    // 0^a = a
    

return 0;
}