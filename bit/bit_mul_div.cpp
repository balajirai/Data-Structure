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

    // multiplying by 2 using bitwise left shift operator
    cout<<"Integer multiplication by 2 is : ";
    cout<<(n<<1)<<endl;

    // dividing by 2 using bitwise right shift operator
    cout<<"Integer division by 2 is : ";
    cout<<(n>>1)<<endl;
return 0;
}