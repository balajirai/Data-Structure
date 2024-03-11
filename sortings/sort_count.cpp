// this sorting alorithm is used when we are dealing with a lot of numbers but are in relatively small range 
// for example :  there are 100,000 numbers to be sort and these numbers are in the interval 1 to 20,000 
// so count sort can execute atmost 20,000 operations but other algorithms may execute milions of operations

#include <bits/stdc++.h>
using namespace std;

int A[101], X, n; // I supposed that we have numbers from 0-100
int maximum;
int main (){
    cout<<"Enter Number of Elements : ";
    cin>>n; // number of elements
    cout<<"Enter the Elements : ";
    for (int i=1; i<=n; ++i) {
        cin>>X; // a new number
        ++A[X]; // increasing the appearance array

        maximum=max(maximum, X);
    }

    cout<<"Ascending order is : ";
    for (int i=0; i<=maximum; ++i) {
        if (A[i]>0) {
            for (int j=1; j<=A[i]; ++j)
                cout<<i<<" ";
        }
    }

    return 0;
}