// printing name n-times

#include <iostream>
using namespace std;

void name(string s, int n){
    if(n==0) return;
    name(s,n-1);
    cout<<s<<endl;
}
int main(){
    string s;
    int n;
    cin>>s>>n;
    name(s,n);
return 0;
}