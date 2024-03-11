#include <bits/stdc++.h>
using namespace std;

void toBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}
int main(){
    int n,i;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;

    int a = n;

    // this is just to convert into binary
    cout<<"Binary of "<<a<<" is : ";
    toBinary(n);

    // toggle the given bit means just inverting the bit at that position
    a = a ^ (1<<i);
    cout<<"Toggled bit is : ";
    toBinary(a);
return 0;
}