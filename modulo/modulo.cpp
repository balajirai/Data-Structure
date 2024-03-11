// finding the modulo of higher data value
/*

Given a number N . Print the factorial of N
Constraints : 
1<= N <= 100

Print answer modulo M 
where M = 47

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int M = 47;

    long long fact = 1;
    for (int i = 2; i <= n; i++){
        fact = (fact*i)%M;
    }
    cout<<fact<<endl;
    
return 0;
}