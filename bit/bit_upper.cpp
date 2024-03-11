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

    // lower to upper case
    
    char up = n & ~(1<<5);
    // char up = n & '_';
    cout<<"Upper case of "<<n<<" is : ";
    cout<<up<<endl;

    cout<<"Binary of "<<up<<" is : ";
    toBinary(int(up));

return 0;
}