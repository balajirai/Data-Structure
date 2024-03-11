#include <bits/stdc++.h>
using namespace std;

void toBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}
int main(){
    char n;
    cout<<"Enter the Char : ";
    cin>>n;

    // this is just to convert into binary
    cout<<"Binary of "<<n<<" is : ";
    toBinary(int(n));

    // upper to lower case
    
    // char lo = n | (1<<5);
    char lo = n | ' ';
    cout<<"Lower case of "<<n<<" is : ";
    cout<<lo<<endl;

    cout<<"Binary of "<<lo<<" is : ";
    toBinary(int(lo));

return 0;
}