// printing n natural numbers from 1 to n in descending order using recursion without loops

#include <iostream>
using namespace std;

void Print(int n){
    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<" ";
    Print(n-1);
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Natural Numbers are : ";
    Print(n);
return 0;
}