#include <bits/stdc++.h>
using namespace std;

/*
XOR from 1 to n
Efficient method :

1- Find the remainder of n by moduling it with 4.
2- If rem = 0, then XOR will be same as n.
3- If rem = 1, then XOR will be 1.
4- If rem = 2, then XOR will be n+1.
5- If rem = 3 ,then XOR will be 0.

*/

int computeXOR(int n){
    // If n is a multiple of 4
    if (n % 4 == 0) return n;

    // If n%4 gives remainder 1
    if (n % 4 == 1) return 1;

    // If n%4 gives remainder 2
    if (n % 4 == 2) return n + 1;

    // If n%4 gives remainder 3
    return 0;
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin>>n;
    int result = computeXOR(n);
    cout << "XOR from 1 to "<< n << " is   : " << result << endl;
    return 0;
}

// brute force

// int computeXOR(int n) {
// 	if (n == 0)  return 0; // base case
// 	int uni = 0;
// 	for (int i = 1; i <= n; i++) {
// 		uni = uni ^ i; // calculate XOR
// 	}
// 	return uni;
// }


/*

Number Binary-Repr  XOR-from-1-to-n
1         1           [0001]
2        10           [0011]
3        11           [0000]  <----- We get a 0
4       100           [0100]  <----- Equals to n
5       101           [0001]
6       110           [0111]
7       111           [0000]  <----- We get 0
8      1000           [1000]  <----- Equals to n
9      1001           [0001]
10     1010           [1011]
11     1011           [0000] <------ We get 0
12     1100           [1100] <------ Equals to n

*/