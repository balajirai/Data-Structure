// finding/calculating factorial using recursion 

#include <iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<fact(n)<<endl;
return 0;
}