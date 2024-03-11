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

    // check the number is odd or even using bit manipulation 
    // faster than modulo opretion
    cout<<"The number "<<n<<" is : ";
    if(n&1) cout<<"ODD"<<endl;
    else cout<<"EVEN"<<endl;
return 0;
}